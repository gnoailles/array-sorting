#include <Algorithm/BubbleSort.h>

using namespace Algorithm;

BubbleSort::BubbleSort()
{
}


BubbleSort::~BubbleSort()
{
}

Utils::Timer::ms BubbleSort::Sort(int* o_array, const size_t p_size)
{
	m_timer.Restart();
	size_t size = p_size;
	while (size != 0)
	{
		size_t newSize = 0;
		for (int i = 1; i < p_size; i++) {
			if (o_array[i - 1] > o_array[i])
			{
				std::swap(o_array[i - 1], o_array[i]);
				newSize = i;
			}
		}
		size = newSize;
	}
	return m_timer.Elapsed();
}
