#include<iostream>
#include "Util.h"
int max(int a, int b);
int max(int a, int b);

int max(int a, int b) {

	return a > b ? a : b;
}

int main006(void) {
	int result = max(100, 200);
	cout << result << endl;
	swap(100, 200);
	cout << NULL << endl;


	return 0;
}