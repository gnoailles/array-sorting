#pragma once
#include <Algorithm/SortingAlgorithm.h>
namespace Algorithm
{
	class BubbleSort : public SortingAlgorithm
	{
	public:
		BubbleSort();
		~BubbleSort();

		Utils::Timer::ms Sort(int* o_array, const size_t p_size) override;
	};
}
