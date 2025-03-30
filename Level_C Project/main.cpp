#include "util.h"
#include "find_max_and_min_elements.h"
#include "sum_after_first_odd_element.h"
#include "product_between_first_and_last_even_elements.h"
#include "product_elemets_after_max_value.h"
#define BUF 100

int main() {

	cout << "Level C.\n";

	int arr[BUF]{ 1,2,14,-3,1,4,1,3,10,12 };

	int size;
	cout << "\nEnter size of array: ";
	cin >> size;

	//init(arr, size, -20, 20);
	cout << " Array: " << convert(arr, size) << endl;

	//cout << find_max_and_min_elements(arr, size) << ".\n";

	//cout << " Sum of elements after the first odd element is "
	//	<< sum_after_first_odd_element(arr, size) << endl;

	//cout << " The product of the elements between the first and last even elements is "
	//	<< product_between_first_and_last_even_elements(arr, size) << endl;

	//cout << "Product of elements after the maximal element is "
	//	<< product_elemets_after_max_value(arr, size) << endl;

	return 0;

}