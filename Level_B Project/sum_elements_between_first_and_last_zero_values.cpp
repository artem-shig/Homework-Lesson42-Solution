#include "sum_elements_between_first_and_last_zero_values.h"

int get_first_zero_value_index(int* arr, int size) {

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0) {
			return i;
		}
	}

	return -1;
}

int get_last_zero_value_index(int* arr, int size) {

	for (int i = size - 1; i != 0; i--)
	{
		if (arr[i] == 0) {
			return i;
		}
	}

	return -1;
}

int sum_elements_between_first_and_last_zero_values(int* arr, int size) {
	int sum = 0;

	int indexFirstZeroValue = get_first_zero_value_index(arr, size);
	int indexLastZeroValue = get_last_zero_value_index(arr, size);

	for (int i = indexFirstZeroValue + 1; i < indexLastZeroValue; i++)
	{
		sum += arr[i];
	}

	return sum;
}