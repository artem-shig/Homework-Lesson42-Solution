#include "util.h"
#include "sum_between_absolute_max_min_values.h"
#include "product_elements_with_even_numbers.h"
#include "sum_positive_elements.h"
#include "sum_elements_with_odd_numbers.h"
#define BUF 100

int main() {

	cout << "Level A.\n";

	int arr[BUF]{ 1,-4,2,-45,3,34,3,2,2,2 };

	int size;
	cout << "Enter size of array: ";
	cin >> size;

	//init(arr, size, -20, 20);
	cout << "Array: " << convert(arr, size) << endl;

	//cout << "The sum of the elements between the maximum in absolute value and the minimum in absolute value elements is "
	//	<< sum_between_absolute_max_min_values(arr, size) << endl;

	//cout << "Product of array elements with even numbers is "
	//	<< product_elements_with_even_numbers(arr, size) << endl;

	//cout << "Sum of positive elements of an array is "
	//	<< sum_positive_elements(arr, size) << endl;

	//cout << "Sum of odd-numbered array elements is "
	//	<< sum_elements_with_odd_numbers(arr, size) << endl;


	return 0;
}