//#include "cmath"
#include "logic.h"

int get_first_negative_value_index(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0) {
			return i;
		}
	}

	return -1;
}

int sum_absolute_value_after_first_negative_value(int* arr, int size) {
	int index = get_first_negative_value_index(arr, size);

	if (index < 0) {
		return 0;
	}

	int sum = 0;

	for (int i = index + 1; i < size; i++)
	{
		sum += (arr[i] < 0 ? -arr[i] : arr[i]); // abs(arr[i])
	}
	return sum;
}