#include <Algorithm/QuickSort.h>

using namespace Algorithm;

QuickSort::QuickSort()
{
}


QuickSort::~QuickSort()
{
}

Utils::Timer::ms QuickSort::Sort(int* o_array, const size_t p_size)
{
	m_timer.Restart();

	QuickSortR(o_array, 0, p_size - 1);

	return m_timer.Elapsed();
}

void QuickSort::QuickSortR(int* o_array, const size_t p_lo, const size_t p_hi) const
{
	if(p_lo < p_hi)
	{
		const size_t p = Partition(o_array, p_lo, p_hi);
		QuickSortR(o_array, p_lo, p);
		QuickSortR(o_array, p + 1, p_hi);
	}
}

size_t QuickSort::Partition(int* o_array, const size_t p_lo, const size_t p_hi) const
{
	const int pivot = o_array[p_lo];
	size_t i = p_lo - 1;
	size_t j = p_hi + 1;

	while (true) {
		do i++;
		while (o_array[i] < pivot);

		do j--;
		while (o_array[j] > pivot);

		if (i >= j)
			return j;

		std::swap(o_array[i], o_array[j]);
	}
}
