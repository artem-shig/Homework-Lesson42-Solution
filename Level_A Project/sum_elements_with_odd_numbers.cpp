#include "sum_elements_with_odd_numbers.h"

int sum_elements_with_odd_numbers(int* arr, int size) {
	int sumOddElements = 0;

	for (int i = 1; i < size; i++)
	{
		if (i % 2 != 0) {
			sumOddElements += arr[i];
		}
	}

	return sumOddElements;
}