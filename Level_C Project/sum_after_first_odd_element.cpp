#include "sum_after_first_odd_element.h"

int get_first_odd_element(int* arr, int size) {

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0) {
			return i;
		}
	}
	return -1;
}

int sum_after_first_odd_element(int* arr, int size) {
	int sum = 0;
	int firstOddElement = get_first_odd_element(arr, size);

	for (int i = firstOddElement + 1; i < size; i++)
	{
		sum += arr[i];
	}

	return sum;
}