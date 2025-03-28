#include "logic.h"

int get_first_zero_value_index(int* arr, int size) {

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0) {
			return i;
		}
	}

	return -1;
}

int get_second_zero_value_index(int* arr, int size) {

	if (get_first_zero_value_index(arr, size) < 0) {
		return -1;
	}

	for (int i = get_first_zero_value_index(arr, size) + 1; i < size; i++)
	{
		if (arr[i] == 0) {
			return i;
		}
	}

	return -1;
}

int sum_value_between_first_and_second_zero_values(int* arr, int size) {
	int sum = 0;
	int indexFirstZeroValue = get_first_zero_value_index(arr, size);
	int indexSecondZeroValue = get_second_zero_value_index(arr, size);

	if (indexSecondZeroValue < 0) {
		return 0;
	}

	for (int i = indexFirstZeroValue + 1; i < indexSecondZeroValue; i++)
	{
		sum += arr[i];
	}

	return sum;
}