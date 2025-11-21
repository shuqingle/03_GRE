#include<stdio.h>

void greet2() {
	printf("heelo\n");
}

int main003(void) {
	greet2();
	int a = 10;
	void* ptr = &a;
	printf("value of ptr==%d\n", *(int*)ptr);

	return 0;
}