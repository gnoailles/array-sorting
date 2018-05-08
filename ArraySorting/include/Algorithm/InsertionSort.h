#pragma once
#include <Algorithm/SortingAlgorithm.h>

namespace Algorithm
{
	class InsertionSort : public SortingAlgorithm
	{
	public:
		InsertionSort();
		~InsertionSort();

		Utils::Timer::ms Sort(int* o_array, const size_t p_size) override;
	};
}
