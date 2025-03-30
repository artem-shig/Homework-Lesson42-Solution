#include "product_between_first_and_last_even_elements.h"

int get_first_even_element(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0) {
			return i;
		}
	}
	return -1;
}

int get_last_even_element(int* arr, int size) {
	for (int i = size - 1; i >= 0; i--)
	{
		if (arr[i] % 2 == 0) {
			return i;
		}
	}
	return -1;
}

int product_between_first_and_last_even_elements(int* arr, int size) {
	int product = 1;

	int firstEvenElement = get_first_even_element(arr, size);
	int lastEvenElement = get_last_even_element(arr, size);

	if (firstEvenElement > lastEvenElement) {
		int t = lastEvenElement;
		lastEvenElement = firstEvenElement;
		firstEvenElement = t;
	}

	for (int i = firstEvenElement + 1; i < lastEvenElement; i++)
	{
		product *= arr[i];
	}

	return product;
}