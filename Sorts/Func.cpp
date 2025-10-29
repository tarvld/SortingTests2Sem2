#include <iostream>
#include "Func.h"
#include <cmath>
using namespace std;

template <typename T>
void smena(T& a, T& b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
void printArr(T arr[], int lenarr) {
	for (int i = 0; i < lenarr; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

template <typename T>
bool arrEqual(T arr1[], T arr2[], int size) {
	return equal(arr1, arr1 + size, arr2);
}

template void smena<int>(int& a, int& b);
template void smena<double>(double& a, double& b);

template void printArr<int>(int arr[], int lenarr);
template void printArr<double>(double arr[], int lenarr);

template bool arrEqual<int>(int arr1[], int arr2[], int size);
template <>
bool arrEqual<double>(double arr1[], double arr2[], int size) {
	for (int i = 0;i < size;i++) {
		if (abs(arr1[i] - arr2[i]) > 1e-10)
			return false;
	}
	return true;
}