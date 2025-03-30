#include "util.h"
#include "sort__until_zero_element_appears.h"
#include "sort_until_negative_element_appears.h"
#include "sort_until_even_element_appears.h"
#include "sort_to_first_element_s.h"
#define BUF 100

int main() {

	cout << "Level D.\n";

	int arr[BUF]{ 1,3,15,-3,34,4,1,3,0,12 };

	int size;
	cout << "\nEnter size of array: ";
	cin >> size;

	//init(arr, size, -20, 20);
	cout << " Array: " << convert(arr, size) << endl;

	//sort__until_zero_element_appears(arr, size);

	//cout << "Sort array elements in descending order until the first element is zero:\n"
	//	<< " " << convert(arr, size) << endl;

	//sort_until_negative_element_appears(arr, size);

	//cout << "Sort array elements in descending order up to the first negative element:\n"
	//	<< " " << convert(arr, size) << endl;

	//sort_until_even_element_appears(arr, size);

	//cout << "Sort array elements in descending order to the first even element:\n"
	//	<< " " << convert(arr, size) << endl;

	//sort_to_first_element_s(arr, size);

	//cout << "Sort the array elements in descending order until the first element equal to s:\n"
	//	<< " " << convert(arr, size) << endl;

	return 0;
}