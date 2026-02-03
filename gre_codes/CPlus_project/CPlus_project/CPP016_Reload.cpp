#include<iostream>
using namespace std;

void fu(int& a) {
	cout << " fu(int& a)" << endl;
}
void fu(const int& a) {
	cout << "fu(const int& a)" << endl;
}

int main016(void) {
	int a = 10;
	fu(a);
	fu(10);
	return 0;
}