#include "product_elemets_after_max_value.h"

int get_max_element(int* arr, int size) {
	int maxElement = 0;

	for (int i = 1; i < size; i++)
	{
		if (arr[maxElement] < arr[i]) {
			maxElement = i;
		}
	}
	return maxElement;
}

int product_elemets_after_max_value(int* arr, int size) {
	int product = 1;
	int maxElement = get_max_element(arr, size);

	for (int i = maxElement + 1; i < size; i++)
	{
		product *= arr[i];
	}

	return product;
}