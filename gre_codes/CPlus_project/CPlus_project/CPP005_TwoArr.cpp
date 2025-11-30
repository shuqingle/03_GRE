#include<iostream>
#include "Util.h"

int main005(void) {
	//方式1
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
		}
	}
	//方式2
	int arr2[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	//方式3
	int arr3[2][3] = { 1,2,3,4,5,6 };
	//方式4
	int arr4[][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout << arr4[i][j] << " ";
		}
	}
	cout << " " << endl;
	cout << sizeof(arr) << endl;
	cout << sizeof(arr[0]) << endl;
	cout << sizeof(arr[0][0]) << endl;

	cout << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	cout << arr << endl;
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << &arr[0][1] << endl;
	
	return 0;
}