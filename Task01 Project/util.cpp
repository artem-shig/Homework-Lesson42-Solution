#include "util.h"

void random_init(int* arr, int size, int a, int b) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (b - a + 1) + a;
	}
}

void user_init(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "array[" << i + 1 << "]" << endl;
		cin >> arr[i];
	}
}

string convert(int* arr, int size) {
	string s = "";

	for (int i = 0; i < size; i++)
	{
		s += to_string(arr[i]) + " ";
	}

	return s;
}