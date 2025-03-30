#include "sort_to_first_element_s.h"

void sort_to_first_element_s(int* arr, int size) {

    int s;
    cout << "Enter the element number: ";
    cin >> s;

    while (size != 0) {

        bool flag = true;

        for (int i = 0; i < s - 1; i++)
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
        size -= 1;
    }

}