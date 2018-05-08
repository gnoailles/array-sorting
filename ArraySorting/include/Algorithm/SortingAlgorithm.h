#pragma once
#include "Utils/Timer.h"

namespace Algorithm
{
	class SortingAlgorithm
	{
	protected:
		Utils::Timer m_timer;
	public:
		SortingAlgorithm(){};
		virtual ~SortingAlgorithm() {}

		virtual Utils::Timer::ms Sort(int* o_array, const size_t p_size) = 0;
	};
}
