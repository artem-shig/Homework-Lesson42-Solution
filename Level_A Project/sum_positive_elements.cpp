#include "sum_positive_elements.h"

int sum_positive_elements(int* arr, int size) {
	int sumPositiveElements = 0;

	for (int i = 1; i < size; i++)
	{
		if (arr[i] > 0) {
			sumPositiveElements += arr[i];
		}
	}

	return sumPositiveElements;
}