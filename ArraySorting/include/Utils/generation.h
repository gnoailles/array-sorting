#pragma once
namespace Utils
{
	namespace Generation
	{
		int* GenerateRandomArray(const size_t size = 100, const bool random = true);
		int* CopyArray(int* p_array, const size_t p_size);
	}
}