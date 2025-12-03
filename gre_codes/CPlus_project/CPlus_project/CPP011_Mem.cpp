#include<iostream>
using namespace std;

//全局变量
int g_a = 10;
int g_b = 10;
//全局常量
const int c_g_a = 10;
const int c_g_b = 10;
int main(void) {
	//局部变量
	int a = 10;
	int b = 10;
	cout << "a==" << (int)&a << endl;
	cout << "b==" << (int)&b << endl;
	cout << "g_a==" << (int)&g_a << endl;
	cout << "g_b==" << (int)&g_b << endl;
	//静态变量
	static int s_a = 10;
	static int s_b = 10;
	cout << "s_a==" << (int)&s_a << endl;
	cout << "s_b==" << (int)&s_b << endl;
	cout << "str1==" << (int)&"hello1" << endl;
	cout << "str2==" << (int)&"hello2" << endl;
	cout << "c_g_a==" << (int)&c_g_a << endl;
	cout << "c_g_b==" << (int)&c_g_b << endl;
	//局部常量
	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "c_l_a==" << (int)&c_l_a << endl;
	cout << "c_l_b==" << (int)&c_l_b << endl;
	
	return 0;
}