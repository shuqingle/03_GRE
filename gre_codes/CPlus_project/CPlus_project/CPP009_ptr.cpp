#include<iostream>
#include "CPP009_ptr.h"
using namespace std;

void swap2(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap3(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int* arr, int len) {//int* 也可以写成int arr[]
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void printArr(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
}
int main(void) {

	int a = 20;
	int b = 10;
	swap2(a, b);
	cout << a << "--" << b << endl;
	swap3(&a, &b);
	cout << a << "--" << b << endl;

	int arr[10] = { 1,3,2,5,4,9,7,8,6,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, len);
	printArr(arr, len);
	return 0;
}