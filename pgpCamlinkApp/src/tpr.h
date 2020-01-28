#ifndef __TPR_H__
#define __TPR_H__
#include<stdint.h>
typedef uint32_t u32;
typedef uint32_t __u32;

/* Minor 0-11 = trigger channels */
#define DEVNODE_MINOR_CONTROL   12
#define DEVNODE_MINOR_BSA       13

/*
 * These are the various messages that are passed from the tpr to tprProcess.
 */

typedef struct tprHeader
{
    uint16_t chmask;
    uint8_t  tag;
#define TAG_DROP      0x80
#define TAG_LCLS1     0x40
#define TAG_TYPE_MASK 0xf
#define TAG_EVENT     0
#define TAG_BSA_CTRL  1
#define TAG_BSA_EVENT 2
#define TAG_END       15
    uint8_t  dma_ownership;
#define DMAOWN_NEW    0x80
#define DMAOWN_DROP   0x40
} __attribute__((packed)) tprHeader;

typedef struct tprEvent
{
    struct tprHeader header;
    uint32_t         length;
    uint64_t         pulseID;
    uint32_t         nanosecs;
    uint32_t         seconds;
    uint16_t         rates;
#define RATE_AC_60Hz       0x8000
#define RATE_AC_30Hz       0x4000
#define RATE_AC_10Hz       0x2000
#define RATE_AC_5Hz        0x1000
#define RATE_AC_1Hz        0x0800
#define RATE_AC_HALFHz     0x0400
#define RATE_FIXED_929kHz  0x0040
#define RATE_FIXED_71kHz   0x0020
#define RATE_FIXED_10kHz   0x0010
#define RATE_FIXED_1kHz    0x0008
#define RATE_FIXED_100Hz   0x0004
#define RATE_FIXED_10Hz    0x0002
#define RATE_FIXED_1Hz     0x0001
    uint16_t         timeslot;
#define TS_71kHZ_RESYNC    0x8000
#define TS_CLK_TS_CHG_MASK 0x07ff
#define TS_CLK_TS_CHG_OFF  3
#define TS_ACMASK          7
    uint32_t         beamreq;                 // 28
    union {
        struct {
            uint32_t         mod[6];                  // 32
        } l1;
        struct {
            uint16_t         beamenergy[4];           // 32
            uint32_t         photon_wavelen;          // 40
            uint16_t         status;                  // 44
            uint16_t         mps_limit;               // 46
            uint64_t         mps_class;               // 48
        } l2;
    } misc;
    uint32_t         seq[9];                  // 56, last reserved for lcls1!
} __attribute__((packed)) tprEvent;

typedef struct tprBSAControl
{
    struct tprHeader header;
    uint32_t         nanosecs;
    uint32_t         seconds;
    uint64_t         init;
    uint64_t         minor;
    uint64_t         major;                  // Both == invalid alarm OK!
} __attribute__((packed)) tprBSAControl;

typedef struct tprBSAEvent
{
    struct tprHeader header;
    uint64_t         PID;
    uint64_t         active;
    uint64_t         avgdone;
    uint32_t         nanosecs;
    uint32_t         seconds;
    uint64_t         update;
} __attribute__((packed)) tprBSAEvent;

#endif /* __TPR_H__ */
