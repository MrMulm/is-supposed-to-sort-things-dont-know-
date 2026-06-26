#pragma once
#include <iostream>
namespace sorters {
	template <typename T>
	void bubble_sort(T tarray[], int elements) {
		T a, b;
		for (int n = elements; n > 1; n--) {
			for (int i = 0; i < elements - 1; i++) {
				if (tarray[i] > tarray[i + 1]) {
					a = tarray[i];
					b = tarray[i + 1];
					tarray[i] = b;
					tarray[i + 1] = a;
				}
			}
		}
	}
}
