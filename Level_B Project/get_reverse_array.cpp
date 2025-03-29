#include "get_reverse_array.h"

string get_reverse_array(int* arr, int size) {
	string reverseArray = "";

	for (int i = 0; i < size; i++)
	{
		reverseArray = to_string(arr[i]) + " " + reverseArray;
	}

	return reverseArray;
}