#include "sort__until_zero_element_appears.h"

int find_first_zero_element(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0) {
            return i;
        }
    }
    return -1;
}

void sort__until_zero_element_appears(int* arr, int size) {

    int firstZeroElement = find_first_zero_element(arr, size);

    if (firstZeroElement < 0) {
        return;
    }

    while (firstZeroElement != 0) {

        bool flag = true;

        for (int i = 0; i < firstZeroElement - 1; i++)
        {

            if (arr[i] < arr[i + 1]) {
                flag = false;
                int t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;
            }
        }
        if (flag) {
            break;
        }
        firstZeroElement -= 1;
    }
}