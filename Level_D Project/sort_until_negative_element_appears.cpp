#include "sort_until_negative_element_appears.h"

int find_first_negative_element(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0) {
            return i;
        }
    }
    return -1;
}

void sort_until_negative_element_appears(int* arr, int size) {
    int firstNegativeElement = find_first_negative_element(arr, size);

    while (firstNegativeElement != 0) {

        bool flag = true;

        for (int i = 0; i < firstNegativeElement - 1; i++)
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
        firstNegativeElement -= 1;
    }

}