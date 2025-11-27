#include<iostream>
using namespace std;
int main002(void) {
	cout << "类型占用空间" << sizeof(long long) << endl;

	float f = 3e2;
	cout << "f==" << f << endl;
	char a = 'a';
	char ch = 97;
	cout << "ch==" << ch << ";" << int(ch) << endl;

	cout << "\tHello" << endl;

	string str = "你好";
	cout << str << endl;
	bool flag = true;
	cout << flag << endl;
	cout << (int)flag << endl;
	cout << (int)!flag << endl;
	int c = 0;
	cout << "请输入整数" << endl;
	cin >> c;
	cout << "结果==" << c << endl;
	return 0;
}