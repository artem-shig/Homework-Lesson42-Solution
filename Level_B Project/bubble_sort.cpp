#include "bubble_sort.h"

void bubble_sort(int* arr, int size){

    while (size != 0) {

        bool flag = true;

        for (int i = 0; i < size - 1; i++)
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
