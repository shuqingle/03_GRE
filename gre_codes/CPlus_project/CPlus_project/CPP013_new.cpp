#include<iostream>
using namespace std;
int* func3() {
	int* a = new int(10);
	return a;
}

int main013(void) {
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	delete arr;

	/*int* p = func3();
	cout << *p << endl;
	cout << *p << endl;
	delete p;*/
	//cout << *p << endl;
	return 0;
}