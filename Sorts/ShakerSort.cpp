#include <iostream>
#include "Func.h"

using namespace std;

template <typename T>
void ShakerSort(T arr[], int lenarr) {
	int start = 0, end = (lenarr - 1);
	bool swap = true;

	while (start < end && swap) {
		swap = false;
		for (int i = start; i < end; i++) {
			if (arr[i] > arr[i+1]) {
				smena(arr[i], arr[i+1]);
				swap = true;
			}
		}
		end--;

		for (int i = end; i > start; i--) {
			if (arr[i] < arr[i-1]) {
				smena(arr[i], arr[i-1]);
				swap = true;
			}
		}
		start++;
	}
}

template void ShakerSort<int>(int arr[], int lenarr);
template void ShakerSort<double>(double arr[], int lenarr);

//void main() {
//	int arr[] = { 14, 11, 5,8,4,2,15,3 };
//	int lenarr = sizeof(arr) / sizeof(arr[0]);
//
//	cout << "Start array:";
//	printArr(arr, lenarr);
//	ShakerSort(arr, lenarr);
//
//	cout << "Sorted array:";
//	printArr(arr, lenarr);
//}