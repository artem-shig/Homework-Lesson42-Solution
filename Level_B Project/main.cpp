#include "util.h"
#include "bubble_sort.h"
#include "sum_elements_between_first_and_last_zero_values.h"
#include "get_reverse_array.h"
#include "product_elements_between_first_and_last_zero_values.h"
#define BUF 100

int main() {

	cout << "Level A.\n";

	int arr[BUF]{ 1,0,2,-3,1,4,1,0,2,2 };

	int size;
	cout << "\nEnter size of array: ";
	cin >> size;

	//init(arr, size, -20, 20);
	cout << " Array: " << convert(arr, size) << endl;

	//bubble_sort(arr, size);
	//cout << " Sort array elements in descending order: "
	//	<< convert(arr, size) << endl;

	//cout << "The sum of the elements between the first zero and the last zero elements is "
	//	<< sum_elements_between_first_and_last_zero_values(arr, size)
	//	<< endl;

	//cout << "Reverse array: " << get_reverse_array(arr, size) << endl;

	//cout << "The product of the elements between the first zero and the last zero elements is "
	//	<< product_elements_between_first_and_last_zero_values(arr, size)
	//	<< endl;

}