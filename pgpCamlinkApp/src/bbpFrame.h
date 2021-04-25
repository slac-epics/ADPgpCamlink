#ifndef BBP_FRAME_H
#define BBP_FRAME_H

#include <cstdlib>
#include <cstdint>
#include <cstring>

namespace bbp
{

// Basler Binary Protocol header
// Described in Appendix A, page 175 of:
//   AW00099704000_ace_aviator__beat_Register_Structure__Access_Methods.pdf

// Each frame consists of:
//   BFS      Binary Frame Start
//   FTF      Frame Type and Format
//   DataLen  Data Length
//   Address  Address
//   Data     Data
//   BCC      Block Check Character
//   BFE      Binary Frame End

static const uint8_t BFS              = 0x01; // First byte is 1 (ASCII SOH)
static const uint8_t BFE              = 0x03; // First byte is 3 (ASCII ETX)

// BBP FTF field                                  // One byte
static const uint8_t FTF_M_OPCODE     = 0xf8; // Opcode mask
static const uint8_t FTF_WRT          = 0x00; // This is a write command used to write a single setting to the camera.
static const uint8_t FTF_RD           = 0x08; // This is a read command used to read a single setting from the camera.
static const uint8_t FTF_RDRESP       = 0x10; // This is a read response frame without an address field.  (The AddrLen bits are "don’t care").

static const uint8_t FTF_M_BCC        = 0x04; // BCC mask
static const uint8_t FTF_NOBCC        = 0x00; // This frame (and also the response frame) contains no BCC field.
static const uint8_t FTF_BCC          = 0x04; // This frame (and also the response frame) contains a BCC field.

static const uint8_t FTF_M_ADX        = 0x03; // ADX mask
static const uint8_t FTF_ADX16        = 0x00; // Length of the address field is 2 bytes
static const uint8_t FTF_ADX32        = 0x01; // Length of the address field is 4 bytes
static const uint8_t FTF_ADX48        = 0x02; // Length of the address field is 6 bytes
static const uint8_t FTF_ADX64        = 0x03; // Length of the address field is 8 bytes

static const uint8_t ACK              = 0x06; // One byte (ASCII ACK)
static const uint8_t NAK              = 0x15; // One byte (ASCII NAK)

// Register definitions
static const uint8_t OS_BOOL_STATUS   = 0x00;
static const uint8_t OS_BOOL_VALUE    = 0x04;

static const uint8_t OS_FP_STATUS     = 0x00;
static const uint8_t OS_FP_VALUE      = 0x04;
static const uint8_t OS_FP_MIN        = 0x08;
static const uint8_t OS_FP_MAX        = 0x0C;
static const uint8_t OS_FP_INCR       = 0x10;
static const uint8_t OS_FP_POSN       = 0x14;

static const uint8_t OS_SCALAR_STATUS = 0x00;
static const uint8_t OS_SCALAR_VALUE  = 0x04;
static const uint8_t OS_SCALAR_MIN    = 0x08;
static const uint8_t OS_SCALAR_MAX    = 0x0C;
static const uint8_t OS_SCALAR_INCR   = 0x10;

static const uint8_t OS_INFO_STATUS   = 0x00;
static const uint8_t OS_INFO_SIZE     = 0x04;
static const uint8_t OS_INFO_VALUE    = 0x08;

static const uint8_t OS_STR_STATUS    = 0x00;
static const uint8_t OS_STR_SIZE      = 0x04;
static const uint8_t OS_STR_VALUE     = 0x08;

static const uint8_t OS_ENUM_STATUS   = 0x00;
static const uint8_t OS_ENUM_VALUE    = 0x04;
static const uint8_t OS_ENUM_SIZE     = 0x08;
static const uint8_t OS_ENUM_AVAIL    = 0x0C;
static const uint8_t OS_ENUM_IMPL32   = 0x10;
static const uint8_t OS_ENUM_IMPL64   = 0x14;

static const uint8_t OS_BITF_STATUS   = 0x00;
static const uint8_t OS_BITF_SIZE     = 0x04;
static const uint8_t OS_BITF_VALUE    = 0x08;
static const uint8_t OS_BITF_AVAIL32  = 0x0C;
static const uint8_t OS_BITF_AVAIL64  = 0x10;
static const uint8_t OS_BITF_IMPL32   = 0x10;
static const uint8_t OS_BITF_IMPL64   = 0x18;

static const uint8_t OS_ARR_STATUS    = 0x00;
static const uint8_t OS_ARR_ITEMSIZE  = 0x04;
static const uint8_t OS_ARR_ITEMNO    = 0x08;
static const uint8_t OS_ARR_VALUES    = 0x0C;

// Status word fields
static const uint32_t M_STATUS_ERROR       = 0x0000000F;
static const uint32_t M_STATUS_TYPEID      = 0x000FFFF0;
static const uint32_t M_STATUS_RESERVED    = 0x07F00000;
static const uint32_t M_STATUS_VALID       = 0x08000000;
static const uint32_t M_STATUS_LOCKED      = 0x10000000;
static const uint32_t M_STATUS_CACHEABLE   = 0x20000000;
static const uint32_t M_STATUS_AVAILABLE   = 0x40000000;
static const uint32_t M_STATUS_IMPLEMENTED = 0x80000000;
static const uint32_t M_STATUS_NOTREADY    = (M_STATUS_LOCKED     |
                                              M_STATUS_AVAILABLE  |
                                              M_STATUS_IMPLEMENTED);

static const size_t MAX_FRAME_SIZE = 1 + 1 + 1 + 8 + 255 + 1 + 1;
static const size_t MIN_FRAME_SIZE = 1 + 1 + 1 + 2 +   0 + 1 + 1;
static const size_t MAX_DATA_SIZE  = 255;

static const auto SUCCESS = EXIT_SUCCESS;
static const auto FAILURE = EXIT_FAILURE;

typedef uint32_t Status_t;

extern int verbose;

Status_t getData(unsigned long address,
                 size_t        adxLen,
                 uint8_t*      data,
                 size_t        dataLen);
Status_t getStatus(unsigned long address, size_t adxLen);
int asciiToFrame(const char* stream,
                 size_t      size,
                 uint8_t*    frame,
                 size_t&     frameSize);
int frameToAscii(const uint8_t* frame,
                 size_t         frameSize,
                 char*          stream,
                 size_t&        size);
};  // namespace bbp

#endif
