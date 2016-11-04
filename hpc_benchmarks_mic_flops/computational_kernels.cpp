#include "computational_kernels.h"

void bandwidth_consective_memory_zone_access_v1(void)
{
	VAL_TYPE * array_to_access = new VAL_TYPE[ARRAY_SIZE_DOUBLE_1GB];
	if (array_to_access == NULL)
	{
		std::cout<<"Memory for array_to_access cannot be allocated"<<std::endl;
		return;
	}

	IDX_TYPE exp_idx;
	VAL_TYPE t1, t2, total_time=0.0;
	IDX_TYPE idx;
	VAL_TYPE tmp;

	#pragma omp parallel
	{
		if (omp_get_thread_num() == 0 )
			std::cout<<omp_get_num_threads()<<" threads."<<std::endl;
	}
	
	for (exp_idx =0; exp_idx<NUM_EXPT; exp_idx++)
	{
		t1 = mysecond();

		#pragma omp parallel for
		for (idx = 0; idx<ARRAY_SIZE_DOUBLE_1GB; idx++)
		{
			tmp = array_to_access[idx];

		}

		t2 = mysecond();
		total_time += t2 - t1;

	}
		total_time /= (VAL_TYPE)NUM_EXPT;

		std::cout << "bandwidth_consective_memory_zone_access_v1, bandwidth:"<<1.0/total_time<<"GB/s"
					<<std::endl;

	delete [] array_to_access;
}