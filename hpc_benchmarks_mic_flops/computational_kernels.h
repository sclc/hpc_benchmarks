#ifndef COMPUTATIONAL_KERNELS_

#include <iostream>
#include <stdlib.h>
#include <new>
#include <omp.h>
#include "time_measurement.h"

#ifndef VAL_TYPE
#define VAL_TYPE double
#endif

#ifndef IDX_TYPE
#define IDX_TYPE int
#endif

#define ARRAY_SIZE_DOUBLE_1GB 134217728
#define ARRAY_SIZE_SINGLE_1GB 268435456

#define NUM_EXPT 100

void bandwidth_consective_memory_zone_access_v1(void);

#endif /*COMPUTATIONAL_KERNELS_*/

