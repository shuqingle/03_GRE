#include<iostream>
using namespace std;

int main008(void) {
	int arr[] = {1,2,3,4,5,6,7};
	int* p = arr;
	cout << arr[0] << endl;
	cout << *p << endl;

	for (int i = 0; i < 7; i++) {
		cout << *p << endl;
		p++;
	}
	//int a = 10;
	//int b = 10;
	////const修饰指针，指针值不允许改，指针指向可以改
	//const int* p1 = &a;
	//p1 = &b;
	////*p1 = 3;


	////const修饰常量，指针值可以改，指针指向不允许改
	//int* const p2 = &a;
	////p2 = &b;
	//*p2 = 100;

	

	////const修饰常量，指针值可以改，指针指向不允许改
	//int* const p2 = &a;
	////p2 = &b;
	//*p2 = 100;

	return 0;
}