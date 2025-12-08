#include<iostream>
using namespace std;

//void youSwap(int& a,int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int& test01() {
//	int a = 10;
//	return a;
//}
//
//int& test02() {
//	static int a = 20;
//	return a;
//}

void f1(int& ref) {
	ref = 100;
}
void f2(const int& ref) {
	//ref = 200;
	cout << ref << endl;
}


int main(void) {
	int a = 10;
	//ref是指针常量
	int& ref = a;
	ref = 20;
	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;
	f1(ref);
	cout << ref << endl;
	f2(ref);

	/*int a = 10;
	int& b = a;
	cout << a << endl;
	cout << b << endl;
	b = 20;
	cout << a << endl;
	cout << b << endl;
	int d = 10;
	int e = 30;
	int& f = d;
	f = e;
	cout << f << endl;
	cout << e << endl;
	e = 40;
	cout << f << endl;
	cout << e << endl;

	int n1 = 10;
	int n2 = 20;
	cout << n1 << endl;
	cout << n2 << endl;
	youSwap(n1, n2);
	cout << n1 << endl;
	cout << n2 << endl;

	int& ref1 = test01();
	cout << "ref1==" << ref1 << endl;
	cout << "ref1==" << ref1 << endl;
	int& ref2 = test02();
	cout << "ref2 == " << ref2 << endl;
	cout << "ref2 == " << ref2 << endl;
	test02() = 1000;
	cout << "ref2 == " << ref2 << endl;
	cout << "ref2 == " << ref2 << endl;*/

	return 0;
}