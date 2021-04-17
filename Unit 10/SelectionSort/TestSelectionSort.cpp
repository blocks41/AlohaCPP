#include <iostream>
#include <array>
#include "SelectionSort.h"

int main() {
	std::array x{ 3.2, 2.0, 8.0, 4.2, 9.2, 1.0, 5.0, 6.0 };
	std::array y{ 3, 2, 8, 4, 9, 1, 5, 6 };

	for (auto i : x) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
	for (auto i : y) {
		std::cout << i << " ";
	}
	std::cout << std::endl;

	SelectionSort(x);
	SelectionSort(y);

	for (auto i : x) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
	for (auto i : y) {
		std::cout << i << " ";
	}

	return 0;
}