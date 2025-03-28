#include "logic.h"
void bubble_sort_asc(int* arr, int size) {
	for (int i = 0; i < size - 1; i++)
	{
		bool flag = true;
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1]) {
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
				flag = false;
			}
		}
		if (flag) {
			break;
		}
	}
}