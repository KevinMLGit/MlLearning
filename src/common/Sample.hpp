#ifndef __SAMPLE_H

#include <stdint.h>

typedef struct Sample {
        double      label;
        uint64_t    beginIdx;
        uint64_t    endIdx;
} Sample;

#endif // __SAMPLE_H
