#include <Algorithm/HeapSort.h>

using namespace Algorithm;


HeapSort::HeapSort()
{
}


HeapSort::~HeapSort()
{
}

Utils::Timer::ms HeapSort::Sort(int* o_array, const size_t p_size)
{
	m_timer.Restart();

	Heapify(o_array, p_size);

	size_t end = p_size - 1;

	while(end > 0)
	{
		std::swap(o_array[end], o_array[0]);

		--end;
		SiftDown(o_array, 0, end);
	}

	return m_timer.Elapsed();
}

void HeapSort::Heapify(int* o_array, const size_t p_size)
{
	int start = Parent(p_size - 1);
	for (; start >= 0; --start)
	{
		SiftDown(o_array, start, p_size - 1);
	}
}

void HeapSort::SiftDown(int* o_array, const size_t p_start, const size_t p_end)
{
	size_t root = p_start;
	while(LeftChild(root) <= p_end)
	{
		const size_t child = LeftChild(root);
		size_t swap = root;

		if (o_array[swap] < o_array[child])
			swap = child;

		if (child + 1 <= p_end && o_array[swap] < o_array[child + 1])
			swap = child + 1;

		if (swap == root)
			return;

		std::swap(o_array[root], o_array[swap]);
		root = swap;
	}
}