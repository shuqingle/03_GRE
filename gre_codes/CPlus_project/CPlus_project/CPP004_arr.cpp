#include<iostream>
using namespace std;



int main004(void) {
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][3] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;







	/*int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	cout << "占用空间：" << sizeof(arr) << endl;
	cout << "每个元素空间：" << sizeof(arr[0]) << endl;
	cout << "元素个数" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "数组内存首地址：" << (int)arr << endl;
	cout << "元素：" << (int)&arr[0] << endl;*/


	//冒泡
	/*int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	for (int i = 0; i < 9-1; i++) {
		for (int j = 0; j < 9 - i-1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << endl;
	}*/
	return 0;
}