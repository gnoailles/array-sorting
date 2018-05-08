#include <iostream>

#include "Utils/Timer.h"
#include "Utils/generation.h"
#include "Algorithm/BubbleSort.h"
#include "Algorithm/InsertionSort.h"
#include "Algorithm/QuickSort.h"
#include "Algorithm/HeapSort.h"

using namespace Utils;
using namespace Generation;
using namespace Algorithm;

int main()
{
	size_t testSize = 10;
	std::cout << "\n---- Testing size: " << testSize << " ----\n\n";

	int* arr = GenerateRandomArray(testSize);
	{

		int* arr2 = CopyArray(arr, testSize);
		Timer::ms elapsed = BubbleSort().Sort(arr2, testSize);
		std::cout << "BubbleSort: \t\t\t" << elapsed.count() << "ms\n";
		delete[] arr2;

		arr2 = CopyArray(arr, testSize);
		elapsed = InsertionSort().Sort(arr2, testSize);
		std::cout << "InsertionSort: \t\t\t" << elapsed.count() << "ms\n";
		delete[] arr2;


		arr2 = CopyArray(arr, testSize);
		elapsed = QuickSort().Sort(arr2, testSize);
		std::cout << "QuickSort: \t\t\t" << elapsed.count() << "ms\n";
		delete[] arr2;

		arr2 = CopyArray(arr, testSize);
		elapsed = HeapSort().Sort(arr2, testSize);
		std::cout << "HeapSort: \t\t\t" << elapsed.count() << "ms\n";
		delete[] arr2;
	}
	delete[] arr;


	testSize = 100;
	std::cout << "\n---- Testing size: " << testSize << " ----\n\n";

	arr = GenerateRandomArray(testSize);
	{

		int* arr2 = CopyArray(arr, testSize);
		Timer::ms elapsed = BubbleSort().Sort(arr2, testSize);
		std::cout << "BubbleSort: \t\t\t" << elapsed.count() << "ms\n";
		delete[] arr2;

		arr2 = CopyArray(arr, testSize);
		elapsed = InsertionSort().Sort(arr2, testSize);
		std::cout << "InsertionSort: \t\t\t" << elapsed.count() << "ms\n";
		delete[] arr2;


		arr2 = CopyArray(arr, testSize);
		elapsed = QuickSort().Sort(arr2, testSize);
		std::cout << "QuickSort: \t\t\t" << elapsed.count() << "ms\n";
		delete[] arr2;

		arr2 = CopyArray(arr, testSize);
		elapsed = HeapSort().Sort(arr2, testSize);
		std::cout << "HeapSort: \t\t\t" << elapsed.count() << "ms\n";
		delete[] arr2;
	}
	delete[] arr;



	testSize = 1000;
	std::cout << "\n---- Testing size: " << testSize << " ----\n\n";

	arr = GenerateRandomArray(testSize);
	{

		int* arr2 = CopyArray(arr, testSize);
		Timer::ms elapsed = BubbleSort().Sort(arr2, testSize);
		std::cout << "BubbleSort: \t\t\t" << elapsed.count() << "ms\n";
		delete[] arr2;

		arr2 = CopyArray(arr, testSize);
		elapsed = InsertionSort().Sort(arr2, testSize);
		std::cout << "InsertionSort: \t\t\t" << elapsed.count() << "ms\n";
		delete[] arr2;


		arr2 = CopyArray(arr, testSize);
		elapsed = QuickSort().Sort(arr2, testSize);
		std::cout << "QuickSort: \t\t\t" << elapsed.count() << "ms\n";
		delete[] arr2;

		arr2 = CopyArray(arr, testSize);
		elapsed = HeapSort().Sort(arr2, testSize);
		std::cout << "HeapSort: \t\t\t" << elapsed.count() << "ms\n";
		delete[] arr2;
	}
	delete[] arr;



	testSize = 10000;
	std::cout << "\n---- Testing size: " << testSize << " ----\n\n";

	arr = GenerateRandomArray(testSize);
	{

		int* arr2 = CopyArray(arr, testSize);
		Timer::ms elapsed = BubbleSort().Sort(arr2, testSize);
		std::cout << "BubbleSort: \t\t\t" << elapsed.count() << "ms\n";
		delete[] arr2;

		arr2 = CopyArray(arr, testSize);
		elapsed = InsertionSort().Sort(arr2, testSize);
		std::cout << "InsertionSort: \t\t\t" << elapsed.count() << "ms\n";
		delete[] arr2;


		arr2 = CopyArray(arr, testSize);
		elapsed = QuickSort().Sort(arr2, testSize);
		std::cout << "QuickSort: \t\t\t" << elapsed.count() << "ms\n";
		delete[] arr2;

		arr2 = CopyArray(arr, testSize);
		elapsed = HeapSort().Sort(arr2, testSize);
		std::cout << "HeapSort: \t\t\t" << elapsed.count() << "ms\n";
		delete[] arr2;
	}
	delete[] arr;


	testSize = 100000;
	std::cout << "\n---- Testing size: " << testSize << " ----\n\n";

	arr = GenerateRandomArray(testSize);
	{

		int* arr2 = CopyArray(arr, testSize);
		Timer::ms elapsed = BubbleSort().Sort(arr2, testSize);
		std::cout << "BubbleSort: \t\t\t" << elapsed.count() << "ms\n";
		delete[] arr2;

		arr2 = CopyArray(arr, testSize);
		elapsed = InsertionSort().Sort(arr2, testSize);
		std::cout << "InsertionSort: \t\t\t" << elapsed.count() << "ms\n";
		delete[] arr2;


		arr2 = CopyArray(arr, testSize);
		elapsed = QuickSort().Sort(arr2, testSize);
		std::cout << "QuickSort: \t\t\t" << elapsed.count() << "ms\n";
		delete[] arr2;

		arr2 = CopyArray(arr, testSize);
		elapsed = HeapSort().Sort(arr2, testSize);
		std::cout << "HeapSort: \t\t\t" << elapsed.count() << "ms\n";
		delete[] arr2;
	}
	delete[] arr;


	system("pause");
	return 0;
}
