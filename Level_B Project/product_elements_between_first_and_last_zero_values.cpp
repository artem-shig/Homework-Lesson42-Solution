#include "product_elements_between_first_and_last_zero_values.h"

int get_first_zero_value_indexx(int* arr, int size) {

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0) {
			return i;
		}
	}

	return -1;
}

int get_last_zero_value_indexx(int* arr, int size) {

	for (int i = size - 1; i != 0; i--)
	{
		if (arr[i] == 0) {
			return i;
		}
	}

	return -1;
}

int product_elements_between_first_and_last_zero_values(int* arr, int size) {
	int product = 1;

	int indexFirstZeroValue = get_first_zero_value_indexx(arr, size);
	int indexLastZeroValue = get_last_zero_value_indexx(arr, size);

	for (int i = indexFirstZeroValue + 1; i < indexLastZeroValue; i++)
	{
		product *= arr[i];
	}

	return product;
}