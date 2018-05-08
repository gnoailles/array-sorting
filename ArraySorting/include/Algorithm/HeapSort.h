#pragma once
#include <Algorithm/SortingAlgorithm.h>

namespace Algorithm
{
	class HeapSort : public SortingAlgorithm
	{
	public:
		HeapSort();
		~HeapSort();

		Utils::Timer::ms Sort(int* o_array, const size_t p_size) override;

	private:
		static void Heapify(int* o_array, const size_t p_size);
		static void SiftDown(int* o_array, const size_t p_start, const size_t p_end);
		inline static int Parent(const size_t p_node)
		{
			return static_cast<int>(floor((p_node - 1) / 2));
		}
		inline static size_t LeftChild(const size_t p_node)
		{
			return 2 * p_node + 1;
		}
		inline static size_t RightChild(const size_t p_node)
		{
			return 2 * p_node + 2;
		}
	};
}
