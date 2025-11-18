#include<stdio.h>

int main(void) {
	int a = 10;
	int b = 20;
	int max;
	max = (a > b) ? a : b;
	printf("max==%d\n", max);
	return 0;
}