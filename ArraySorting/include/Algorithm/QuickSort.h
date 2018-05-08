#pragma once
#include <Algorithm/SortingAlgorithm.h>

namespace Algorithm
{
	class QuickSort : public SortingAlgorithm
	{
	public:
		QuickSort();
		~QuickSort();


		Utils::Timer::ms Sort(int* o_array, const size_t p_size) override;

	private:
		void QuickSortR(int* o_array, const size_t p_lo, const size_t p_hi) const;
		size_t Partition(int* o_array, const size_t p_lo, const size_t p_hi) const;
	};
}
