#include <Algorithm/InsertionSort.h>

using namespace Algorithm;

InsertionSort::InsertionSort()
{
}


InsertionSort::~InsertionSort()
{
}

Utils::Timer::ms InsertionSort::Sort(int* o_array, const size_t p_size)
{
	m_timer.Restart();

	for (int i = 1; i < p_size; ++i)
	{
		int x = o_array[i];

		int j = i - 1;

		while (j >= 0 && o_array[j] > x)
		{
			o_array[j + 1] = o_array[j];
			--j;
		}
		o_array[j + 1] = x;
	}

	return m_timer.Elapsed();
}
