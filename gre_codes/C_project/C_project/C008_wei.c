#include<stdio.h>

int main008(void) {
	unsigned char a = 5; // 00000101
	unsigned char b = 9; // 00001001
	unsigned char result;

	result = a & b;// 00000001
	printf(" a & b = %d\n", result);
	printf("a | b = %d\n", a | b);

	return 0;
}