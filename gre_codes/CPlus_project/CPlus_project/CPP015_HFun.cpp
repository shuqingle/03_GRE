#include<iostream>
using namespace std;
int func(int a,int b=10,int c = 10) {
	return a + b + c;
}
int func2(int a, int b = 10);

int func2(int a,int b) {
	return a + b;
}
int flys(int a, int) {
	cout << "this is fly" << endl;
	return a;
}
int flys(int b) {
	cout << "b==" << b << endl;
	return b;
}
int main015(void) {
	cout << "ret==" << func(20, 20) << endl;
	cout << "ret2 == " << func(100) << endl;
	flys(10, 10);
	flys(10);
	return 0;
}