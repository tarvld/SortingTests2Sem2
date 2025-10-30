//#define CATCH_CONFIG_MAIN
#include "C:\Users\User\source\repos\Structs\SortingTests\Tests\catch.hpp"
#include <algorithm>
#include "../Sorts/Func.h"
#include "../Sorts/BinaryInsertionSort.h"

TEST_CASE("BinaryInsertion Проверка нулевого массива", "[BinaryInsertion][unit]") {
	int arr[3] = {};
	int ShouldBeArr[3] = {};
	BinaryInsertionSort(arr, 3);
	REQUIRE(arrEqual(arr, ShouldBeArr, 3));
}
TEST_CASE("BinaryInsertion Проверка массива с одним элементом", "[BinaryInsertion][unit]") {
	int arr[1] = { 5 };
	int ShouldBeArr[1] = { 5 };
	BinaryInsertionSort(arr, 1);
	REQUIRE(arrEqual(arr, ShouldBeArr, 1));
}
TEST_CASE("BinaryInsertion Проверка  отсортированного массива", "[BinaryInsertion][unit]") {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int ShouldBeArr[5] = { 1, 2, 3, 4, 5 };
	BinaryInsertionSort(arr, 5);
	REQUIRE(arrEqual(arr, ShouldBeArr, 5));
}
TEST_CASE("BinaryInsertion Проверка обратного массива", "[BinaryInsertion][unit]") {
	int arr[5] = { 5, 4, 3, 2, 1 };
	int ShouldBeArr[5] = { 1, 2, 3, 4, 5 };
	BinaryInsertionSort(arr, 5);
	REQUIRE(arrEqual(arr, ShouldBeArr, 5));
}
TEST_CASE("BinaryInsertion Проверка массива double", "[BinaryInsertion][unit]") {
	double arr[5] = { 5.5, 4.4, 3.3, 2.2, 1.1 };
	double ShouldBeArr[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	BinaryInsertionSort(arr, 5);
	REQUIRE(arrEqual(arr, ShouldBeArr, 5));
}
