/*
 *  This file contains routines for preparing and parsing frames according to
 *  the Basler Binary Protocol.  There are several formats:
 *
 *    C<size>          Character string; <size> is the size of the buffer of
 *                     characters to send.
 *    U<size>          Unsigned integer; <size> is either 4 or 8 for 32 or 64
 *                     bit integers.  This type is for Boolean, Scalar, Info,
 *                     Enumeration, BitField, Array (?) and Command values.
 *    D<size>          Signed integer; <size> is either 4 or 8 for 32 or 64 bit
 *                     integers.  This type is used with Scalar values.
 *    F<size> <scale>  Unsigned fixed point; <size> is either 4 or 8 for 32 or
 *                     64 bit integers; <scale> is the normalization factor.
 *    G<size> <scale>  Signed Fixed point; <size> is either 4 or 8 for 32 or 64
 *                     bit integers; <scale> is the normalization factor.
 *
 *  These formats are followed by a register address in hex (with leading '0x').
 *  A following question mark ('?') requests a read of the given register.
 *  Alternatively, a following equals sign ('=') and an appropriate string, hex,
 *  deximal or floating point value requests a write of the given register with
 *  the given value.  The one case where a value doesn't follow the equals sign
 *  is when a string register is to be cleared.
 *  Examples are:
 *    C32 0x0108?                     // Read Device Vendor Name value
 *    C32 0x00012008=This is a test.  // Write User ID value
 *    C32 0x00012008?                 // Read User ID value
 *    C32 0x00012008=                 // Clear User ID value
 *    U4 0x00012004?                  // Read User ID size
 *    U4 0x00070508=0x40000000        // Set Auto AOI 1 Usage bitfield value
 *    F4 65536 0x00020524?            // Read Gamma fixed point value
 *    F4 65536 0x00020524=1.25        // Write Gamma fixed point value
 */

#include "bbpFrame.h"

#include <stdio.h>
#include <ctype.h>

using namespace bbp;


int bbp::verbose = 0;


static
uint8_t _bcc(const uint8_t* frame, size_t size)
{
  if (!frame || (size == 0))  return 0;

  if (size > bbp::MAX_FRAME_SIZE)
  {
    fprintf(stderr, "Error: Frame size (%zu) > max (%zu)\n", size, bbp::MAX_FRAME_SIZE);
    abort();
  }
  if (size < bbp::MIN_FRAME_SIZE)
  {
    fprintf(stderr, "Error: Frame size (%zu) < min (%zu)\n", size, bbp::MIN_FRAME_SIZE);
    abort();
  }

  const uint8_t* p    = &frame[1];        // Start after the BFS field
  const uint8_t* end  = &frame[size - 3]; // Exclude BFS, BCC and BFE fields
  uint8_t       value = *p++;

  while(p <= end)
  {
    value ^= *p++;
  }

  return value;
}

static
size_t _encode(uint8_t*            frame,
               size_t              size,
               uint8_t             opcode,
               unsigned long long  address,
               size_t              adxLen,
               const uint8_t*      data,
               size_t              dataLen)
{
  if (frame == nullptr)
  {
    fprintf(stderr, "Error: No frame provided\n");
    return 0;
  }
  if ((adxLen & 1) || (adxLen > sizeof(uint64_t)))
  {
    fprintf(stderr, "Error: Invalid address length %zu\n", adxLen);
    return 0;
  }
  if (dataLen > 255)  dataLen = 255;
  if (size < (3 + adxLen + (data ? dataLen : 0) + 2) * sizeof(*frame))
  {
    fprintf(stderr, "Error: Frame buffer is too small @ %zu: need %zu\n",
            size, (3 + adxLen + dataLen + 2) * sizeof(*frame));
    return 0;
  }

  unsigned idx = 0;

  frame[idx++] = bbp::BFS;
  frame[idx++] = opcode | bbp::FTF_BCC | ((adxLen - 2) >> 1);
  frame[idx++] = uint8_t(dataLen);

  unsigned long long  adx = address;
  for (unsigned i = 0; i < adxLen; ++i)
  {
    frame[idx++] = adx & 0x0ffull;
    adx >>= 8;
  }

  if (data)
  {
    for (unsigned i = 0; i < dataLen; ++i)
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      frame[idx++] = data[i];
#elif __BYTE_ORDER == __BIG_ENDIAN
      frame[idx++] = data[dataLen - 1 - i];
#endif
    }
  }

  size_t sz = idx + 1 + 1;              // +1 for BCC, +1 for ETX
  frame[idx++] = _bcc(frame, sz);
  frame[idx++] = bbp::BFE;

  return idx;
}

static
size_t _decode(const uint8_t* frame,
               size_t         size,
               uint8_t*       data,
               size_t&        dataLen)
{
  unsigned idx = 0;

  if (frame[idx] != bbp::BFS)
  {
    fprintf(stderr, "Error: Wrong BFS: got %02x, expected %02x\n", frame[idx], bbp::BFS);
  }
  if ((frame[++idx] & bbp::FTF_M_OPCODE) != bbp::FTF_RDRESP)
  {
    fprintf(stderr, "Error: Wrong FTF opcode: got %02x, expected %02x\n",
            frame[idx] & bbp::FTF_M_OPCODE, bbp::FTF_RDRESP);
  }
  if ((frame[idx] & bbp::FTF_BCC) != bbp::FTF_BCC)
  {
    fprintf(stderr, "Error: Wrong FTF BCC: got %02x, expected %02x\n",
            frame[idx] & bbp::FTF_M_BCC, bbp::FTF_BCC);
  }
  //unsigned addrLen = frame[idx] | bbp::FTF_M_ADX;  // Don't care
  size_t dLen = frame[++idx];           // Can't be greater than 255, may be 0
  if (dLen > dataLen)
  {
    fprintf(stderr, "Error: Data truncated: buffer size is %zu, need %zu\n",
            dataLen, dLen);
    dLen = dataLen;
  }

  dataLen = dLen;
  for (unsigned i = 0; i < dataLen; ++i)
  {
#if __BYTE_ORDER == __LITTLE_ENDIAN
    data[i] = frame[++idx];
#elif __BYTE_ORDER == __BIG_ENDIAN
    data[dataLen - 1 - i] = frame[++idx];
#endif
  }

  uint8_t bcc = _bcc(frame, size);
  if (bcc != frame[++idx])
  {
    fprintf(stderr, "Error: BCC mismatch: got %02x, expected %02x\n", bcc, frame[idx]);
  }
  if (frame[++idx] != bbp::BFE)
  {
    fprintf(stderr, "Error: Wrong BFE: got %02x, expected %02x\n", frame[idx], bbp::BFE);
  }
  if (++idx != size)
  {
    fprintf(stderr, "Error: Consummed %u bytes of %zu\n", idx, size);
  }

  return idx;
}

#if 0                                   // Not ready yet
bbp::Status_t bbp::getData(unsigned long address,
                           size_t        adxLen,
                           uint8_t*      data,
                           size_t        dataLen)
{
  uint8_t oFrame[bbp::MAX_FRAME_SIZE];
  uint8_t iFrame[bbp::MAX_FRAME_SIZE];

  auto oSize = _encode(oFrame, bbp::FTF_RD, address, adxLen, nullptr, dataLen);
  if (oSize == 0)  return FAILURE;

  auto rc = out(oFrame, oSize);
  if (rc != oSize)
  {
    fprintf(stderr, "Error: out returned %zu, expected %zu\n", rc, oSize);
    return FAILURE;
  }

  auto iSize = in(iFrame, sizeof(iFrame));
  if (iSize == 0)
  {
    fprintf(stderr, "Error: No response received\n");
    return FAILURE;
  }

  if (iFrame[0] == bbp::NAK)
  {
    fprintf(stderr, "Error: NAK received\n");
    return FAILURE;
  }

  rc = decode(iFrame, iSize, data, dataLen);
  if (rc != iSize)
  {
    fprintf(stderr, "Error: parse returned %zu, expected %zu\n", rc, iSize);
    return FAILURE;
  }
  if (dataLen != sizeof(uint32_t))
  {
    fprintf(stderr, "Error: Unexpected dataLen: got %zu, expected %zu\n",
            dataLen, sizeof(uint32_t));
    return FAILURE;
  }

  return SUCCESS;
}

bbp::Status_t bbp::getStatus(unsigned long address, size_t adxLen)
{
  uint8_t data[sizeof(uint32_t)];
  auto rc = BbpGetData(address, adxLen, data, sizeof(data));
  if (rc == FAILURE)  return rc;

  auto status = *reinterpret_cast<uint32_t*>(data);
  return status;
}
#endif

static const char* _respFmt;

int bbp::asciiToFrame(const char* stream,
                      size_t      size,
                      uint8_t*    frame,
                      size_t&     frameSize)
{
  int                p1, p2, p3, p4;
  size_t             dataLen;
  unsigned long long address;
  size_t             adxLen;
  char               rw;
  union
  {
    char     chr[bbp::MAX_DATA_SIZE];
    uint8_t  buf[bbp::MAX_DATA_SIZE];
    int32_t  i32;
    uint32_t u32;
    int64_t  i64;
    uint64_t u64;
  } data;

  switch(toupper(stream[0]))
  {
  case 'C':
  {
    sscanf(&stream[1], "%zu 0x%n%Lx%n %c%n%256s%n", &dataLen, &p1, &address, &p2, &rw, &p3, data.chr, &p4);
    adxLen = (p2 - p1) / 2;
    //printf("p1 %d, p2 %d, adxLen %zu, rw '%c', p3 %d, p4 %d, data '%s'\n",
    //       p1, p2, adxLen, rw, p3, p4, data.chr);
    switch (rw)
    {
    case '=':
    {
      // If there is no string after '=', a buffer of '\0's will be written
      memset(data.buf, 0, dataLen);
      strncpy(data.chr, &stream[1 + p3], dataLen); // This allows whitespaces, whereas sscanf doesn't
      auto rc = _encode(frame, size, bbp::FTF_WRT, address, adxLen, data.buf, dataLen);
      if (rc == 0)  return FAILURE;
      frameSize = rc;
      _respFmt = nullptr;
      break;
    }
    case '?':
    {
      auto rc = _encode(frame, size, bbp::FTF_RD, address, adxLen, nullptr, dataLen);
      if (rc == 0)  return FAILURE;
      frameSize = rc;
      _respFmt = stream;
      break;
    }
    default:
    {
      fprintf(stderr, "Error: Wrong character in '%s': got '%c', expected '?' or '='\n",
              stream, rw);
      return FAILURE;
    }
    }
    break;
  }
  case 'U':
  {
    unsigned long long value;
    sscanf(&stream[1], "%zu 0x%n%Lx%n %c%n%Li%n", &dataLen, &p1, &address, &p2, &rw, &p3, &value, &p4);
    adxLen = (p2 - p1) / 2;
    //printf("p1 %d, p2 %d, adxLen %zu, rw '%c', p3 %d, p4 %d, value '%Lu'\n",
    //       p1, p2, adxLen, rw, p3, p4, value);
    switch (rw)
    {
    case '=':
    {
      if (p4 == p3)
      {
        fprintf(stderr, "Error: No, or bad, value found after '='\n");
        return FAILURE;
      }
      if (dataLen == 4)
      {
        data.u32 = uint32_t(value);
        dataLen  = sizeof(data.u32);
      }
      else if (dataLen == 8)
      {
        data.u64 = uint64_t(value);
        dataLen  = sizeof(data.u64);
      }
      else
      {
        fprintf(stderr, "Error: Unsupported size %zu in format '%s'\n", dataLen, stream);
        return FAILURE;
      }
      auto rc = _encode(frame, size, bbp::FTF_WRT, address, adxLen, data.buf, dataLen);
      if (rc == 0)  return FAILURE;
      frameSize = rc;
      _respFmt = nullptr;
      break;
    }
    case '?':
    {
      auto rc = _encode(frame, size, bbp::FTF_RD, address, adxLen, nullptr, dataLen);
      if (rc == 0)  return FAILURE;
      frameSize = rc;
      _respFmt = stream;
      break;
    }
    default:
    {
      fprintf(stderr, "Error: Wrong character in '%s': got '%c', expected '?' or '='\n",
              stream, rw);
      return FAILURE;
    }
    }
    break;
  }
  case 'D':
  {
    long long value;
    sscanf(&stream[1], "%zu 0x%n%Lx%n %c%n%Li%n", &dataLen, &p1, &address, &p2, &rw, &p3, &value, &p4);
    adxLen = (p2 - p1) / 2;
    //printf("p1 %d, p2 %d, adxLen %zu, rw '%c', p3 %d, p4 %d, value '%Ld'\n",
    //       p1, p2, adxLen, rw, p3, p4, value);
    switch (rw)
    {
    case '=':
    {
      if (p4 == p3)
      {
        fprintf(stderr, "Error: No, or bad, value found after '='\n");
        return FAILURE;
      }
      if (dataLen == 4)
      {
        data.i32 = int32_t(value);
        dataLen  = sizeof(data.i32);
      }
      else if (dataLen == 8)
      {
        data.i64 = int64_t(value);
        dataLen  = sizeof(data.i64);
      }
      else
      {
        fprintf(stderr, "Error: Unsupported size %zu in format '%s'\n", dataLen, stream);
        return FAILURE;
      }
      auto rc = _encode(frame, size, bbp::FTF_WRT, address, adxLen, data.buf, dataLen);
      if (rc == 0)  return FAILURE;
      frameSize = rc;
      _respFmt = nullptr;
      break;
    }
    case '?':
    {
      auto rc = _encode(frame, size, bbp::FTF_RD, address, adxLen, nullptr, dataLen);
      if (rc == 0)  return FAILURE;
      frameSize = rc;
      //snprintf(_respFmt, sizeof(_respFmt), "D%zu", dataLen);
      _respFmt = stream;
      break;
    }
    default:
    {
      fprintf(stderr, "Error: Wrong character in '%s': got '%c', expected '?' or '='\n",
              stream, rw);
      return FAILURE;
    }
    }
    break;
  }
  case 'F':
  {
    unsigned    scale;
    long double value;
    sscanf(&stream[1], "%zu %u 0x%n%Lx%n %c%n%Le%n", &dataLen, &scale, &p1, &address, &p2, &rw, &p3, &value, &p4);
    adxLen = (p2 - p1) / 2;
    //printf("p1 %d, p2 %d, adxLen %zu, rw '%c', p3 %d, p4 %d, scale %u, value '%Le'\n",
    //       p1, p2, adxLen, rw, p3, p4, scale, value);
    switch (rw)
    {
    case '=':
    {
      if (p4 == p3)
      {
        fprintf(stderr, "Error: No, or bad, value found after '='\n");
        return FAILURE;
      }
      if (dataLen == 4)
      {
        data.u32 = uint32_t(value * scale);
        dataLen  = sizeof(data.u32);
      }
      else if (dataLen == 8)
      {
        data.u64 = uint64_t(value * scale);
        dataLen  = sizeof(data.u64);
      }
      else
      {
        fprintf(stderr, "Error: Unsupported size %zu in format '%s'\n", dataLen, stream);
        return FAILURE;
      }
      auto rc = _encode(frame, size, bbp::FTF_WRT, address, adxLen, data.buf, dataLen);
      if (rc == 0)  return FAILURE;
      frameSize = rc;
      _respFmt = nullptr;
      break;
    }
    case '?':
    {
      auto rc = _encode(frame, size, bbp::FTF_RD, address, adxLen, nullptr, dataLen);
      if (rc == 0)  return FAILURE;
      frameSize = rc;
      //snprintf(_respFmt, sizeof(_respFmt), "F%zu %u", dataLen, scale);
      _respFmt = stream;
      break;
    }
    default:
    {
      fprintf(stderr, "Error: Wrong character in '%s': got '%c', expected '?' or '='\n",
              stream, rw);
      return FAILURE;
    }
    }
    break;
  }
  case 'G':
  {
    unsigned    scale;
    long double value;
    sscanf(&stream[1], "%zu %u 0x%n%Lx%n %c%n%Le%n", &dataLen, &scale, &p1, &address, &p2, &rw, &p3, &value, &p4);
    adxLen = (p2 - p1) / 2;
    //printf("p1 %d, p2 %d, adxLen %zu, rw '%c', p3 %d, p4 %d, scale %u, value '%Le'\n",
    //       p1, p2, adxLen, rw, p3, p4, scale, value);
    switch (rw)
    {
    case '=':
    {
      if (p4 == p3)
      {
        fprintf(stderr, "Error: No, or bad, value found after '='\n");
        return FAILURE;
      }
      if (dataLen == 4)
      {
        data.i32 = int32_t(value * scale);
        dataLen  = sizeof(data.i32);
      }
      else if (dataLen == 8)
      {
        data.i64 = int64_t(value * scale);
        dataLen  = sizeof(data.i64);
      }
      else
      {
        fprintf(stderr, "Error: Unsupported size %zu in format '%s'\n", dataLen, stream);
        return FAILURE;
      }
      auto rc = _encode(frame, size, bbp::FTF_WRT, address, adxLen, data.buf, dataLen);
      if (rc == 0)  return FAILURE;
      frameSize = rc;
      _respFmt = nullptr;
      break;
    }
    case '?':
    {
      auto rc = _encode(frame, size, bbp::FTF_RD, address, adxLen, nullptr, dataLen);
      if (rc == 0)  return FAILURE;
      frameSize = rc;
      //snprintf(_respFmt, sizeof(_respFmt), "F%zu %u", dataLen, scale);
      _respFmt = stream;
      break;
    }
    default:
    {
      fprintf(stderr, "Error: Wrong character in '%s': got '%c', expected '?' or '='\n",
              stream, rw);
      return FAILURE;
    }
    }
    break;
  }
  default:
  {
    fprintf(stderr, "Error: Wrong command character in '%s': got '%c', expected one of 'C, U, D, F, G'\n",
            stream, *stream);
    return FAILURE;
  }
  }

  if (bbp::verbose)
  {
    printf("Output frame is:\n  ");
    for (unsigned i = 0; i < frameSize; ++i)
    {
      printf("%02x ", frame[i]);
    }
    printf("\n");
  }

  return SUCCESS;
}

int bbp::frameToAscii(const uint8_t* frame,
                      size_t         frameSize,
                      char*          stream,
                      size_t&        size)
{
  if      (frame[0] == bbp::ACK)  printf("  ACK ");
  else if (frame[0] == bbp::NAK)  printf("  NAK ");
  else                            printf("  %02x ", frame[0]);

  if (bbp::verbose)
  {
    for (unsigned i = 1; i < frameSize; ++i)
    {
      printf(" %02x", frame[i]);
    }
  }
  printf("\n");

  if (frame[0] == bbp::ACK)
  {
    union
    {
      uint8_t  buf[bbp::MAX_DATA_SIZE];
      int32_t  i32;
      uint32_t u32;
      int64_t  i64;
      uint64_t u64;
    } data;
    size_t dataLen = sizeof(data.buf);

    if (frameSize > 1)
    {
      auto rc = _decode(&frame[1], frameSize - 1, data.buf, dataLen);
      if (rc == 0)  return FAILURE;
    }

    if (_respFmt && (frameSize > 1))
    {
      char fmt;
      size_t sz;
      unsigned scale;
      if (sscanf(_respFmt, "%c%zu %u", &fmt, &sz, &scale) < 2)
      {
        fprintf(stderr, "Error: Unrecognized format '%s'\n", _respFmt);
        _respFmt = nullptr;
        return FAILURE;
      }

      switch(toupper(fmt))
      {
      case 'C':
        if (sz != 0)
        {
          //size = snprintf(stream, size, "%s", data.buf);
          unsigned i;
          for (i = 0; (i < size) && (i < dataLen); ++i)
          {
            if (data.buf[i] == '\0')  break;
            stream[i] = data.buf[i] & 0x7f; // Revisit: Mask off 8th bit
          }
          if (i < size)  size = ++i;
        }
        else
          size = 1;
        stream[size - 1] = '\0';        // Zero terminate
        break;
      case 'U':
        if (sz == 4)
        {
          size = snprintf(stream, size, "%u", data.u32);
          if (size == 0)  return FAILURE;
        }
        else if (sz == 8)
        {
          size = snprintf(stream, size, "%lu", data.u64);
          if (size == 0)  return FAILURE;
        }
        else
        {
          fprintf(stderr, "Error: Unsupported size %zu in format '%s'\n", sz, _respFmt);
        }
        break;
      case 'D':
        if (sz == 4)
        {
          size = snprintf(stream, size, "%d", data.i32);
          if (size == 0)  return FAILURE;
        }
        else if (sz == 8)
        {
          size = snprintf(stream, size, "%ld", data.i64);
          if (size == 0)  return FAILURE;
        }
        else
        {
          fprintf(stderr, "Error: Unsupported size %zu in format '%s'\n", sz, _respFmt);
        }
        break;
      case 'F':
        if (sz == 4)
        {
          size = snprintf(stream, size, "%f", double(data.u32) / double(scale));
          if (size == 0)  return FAILURE;
        }
        else if (sz == 8)
        {
          size = snprintf(stream, size, "%lf", double(data.u64) / double(scale));
          if (size == 0)  return FAILURE;
        }
        else
        {
          fprintf(stderr, "Error: Unsupported size %zu in format '%s'\n", sz, _respFmt);
        }
        break;
      case 'G':                         // Revisit: Signed 'F' monicker
        if (sz == 4)
        {
          size = snprintf(stream, size, "%f", double(data.i32) / double(scale));
          if (size == 0)  return FAILURE;
        }
        else if (sz == 8)
        {
          size = snprintf(stream, size, "%lf", double(data.i64) / double(scale));
          if (size == 0)  return FAILURE;
        }
        else
        {
          fprintf(stderr, "Error: Unsupported size %zu in format '%s'\n", sz, _respFmt);
        }
        break;
      default:
        fprintf(stderr, "Error: Unrecognized format character '%c'\n", fmt);
        break;
      }
    }
    else
      size = 0;
  }
  else
  {
    size = snprintf(stream, size, "NAK");
  }
  _respFmt = nullptr;

  return SUCCESS;
}
