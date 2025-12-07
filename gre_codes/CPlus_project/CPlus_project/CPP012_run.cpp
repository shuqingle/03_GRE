#include<iostream>
using namespace std;
int* func() {
	//直接返回局部变量的指针，函数销毁时，这个指针保留了地址，这个地址内容被销毁，导致指针指到了错误的位置
	int a = 10;
	return &a;
}

int* func2() {
	//new是堆内存空间
	int* a = new int(10);
	return a;
}

int main012(void) {
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	int* p2 = func2();
	cout << "=====" << endl;
	cout << *p2 << endl;
	cout << *p2 << endl;
	cout << *p2 << endl;
	cout << *p2 << endl;
	cout << *p2 << endl;
	return 0;
}