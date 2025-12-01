#include<iostream>
using namespace std;
int main007(void) {
	int a = 10;
	int* ptr;
	ptr = &a;

	cout << &a << endl;
	cout << ptr << endl;
	cout << sizeof(ptr) << endl;
	cout << sizeof(char*) << endl;
	int* p = NULL;
	//cout << *p << endl;
	cout << p << endl;
	
	int* p2 = (int*)0x22110011;
	cout << *p2 << endl;
	cout << p2 << endl;
	return 0;
}