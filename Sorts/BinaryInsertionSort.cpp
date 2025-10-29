#include <iostream>
#include "Func.h"
using namespace std;

template <typename T>
int BinarySearch(T arr[], T tmp, int start, int end) {
	if (start > end)
		return start;

	int mid = (start + end) / 2;

	if (tmp == arr[mid])
		return mid + 1;
	if (tmp > arr[mid])
		return BinarySearch(arr, tmp, mid + 1, end);
	return BinarySearch(arr, tmp, start, mid - 1);
}

template <typename T>
void BinaryInsertionSort(T arr[], int lenarr) {
	for (int i = 1; i < lenarr; i++) {
		T tmp = arr[i];
		int j = i - 1;
		int position = BinarySearch(arr, tmp, 0, j);
		while (j >= position) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = tmp;
	}
}

template void BinaryInsertionSort<int>(int arr[], int lenarr);
template void BinaryInsertionSort<double>(double arr[], int lenarr);

//int main(){
//	int arr[] = { 14, 11, 5, 8, 4, 2, 15, 3 };
//	int lenarr = sizeof(arr) / sizeof(arr[0]);
//	cout << "Start array:";
//	printArr(arr, lenarr);
//
//	BinaryInsertionSort(arr, lenarr);
//
//	cout << "Sorted array";
//	printArr(arr, lenarr);
//}