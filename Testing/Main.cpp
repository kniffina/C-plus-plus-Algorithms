#include <iostream>
#include "Header.h"

int main() {
	int arr[] = { 1, 3, 3, 5, 6, 6 };
	
	std::cout << single_numbers(arr, sizeof(arr) / sizeof(arr[0])) << std::endl;

	return 0;
}