#pragma once

#include <array>
#include "SelectionSort.h"

template <int N ,typename T>   //Ä£°å
void SelectionSort(std::array<T, N>& list) {
	constexpr int size = N;

	for (int i = 0; i < size - 1; i++) {
		T min = list[i];
		int min_index = i;
		for (int j = i + 1; j < size; j++) {
			if (min > list[j]) {
				min = list[j];
				min_index = j;
			}
		}
		list[min_index] = list[i];
		list[i] = min;
	}
}