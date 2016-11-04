#include <iostream>
#include <omp.h>
#include "time_measurement.h"
#include "computational_kernels.h"


int main(int argc, char* argv[])
{

	bandwidth_consective_memory_zone_access_v1();

	return 0;
}