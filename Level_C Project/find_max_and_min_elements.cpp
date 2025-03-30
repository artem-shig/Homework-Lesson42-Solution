#include "find_max_and_min_elements.h"

string find_max_and_min_elements(int* arr, int size) {
	int maxElement = arr[0];
	int minElement = arr[0];

	string result = "Max element of the array is ";

	for (int i = 1; i < size; i++)
	{
		if (maxElement < arr[i]) {
			maxElement = arr[i];
		}
		if (minElement > arr[i]) {
			minElement = arr[i];
		}
	}

	result += to_string(maxElement)
		+ ", min element of the array is " + to_string(minElement);

	return result;
}