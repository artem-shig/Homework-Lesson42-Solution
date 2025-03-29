#include "product_elements_with_even_numbers.h"

int product_elements_with_even_numbers(int* arr, int size) {

	int productElements = 1;

	for (int i = 2; i < size; i++) // ���������� i + 2, �� ����� ��������� �� �����������. ������ ��-�� �������� i < size
	{
		if (i % 2 == 0) {
			productElements *= arr[i];
		}
	}

	return productElements;
}