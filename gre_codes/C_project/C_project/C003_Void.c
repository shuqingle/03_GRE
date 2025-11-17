#include<stdio.h>

void greet() {
	printf("heelo\n");
}

int main003(void) {
	greet();
	int a = 10;
	void* ptr = &a;
	printf("value of ptr==%d\n", *(int*)ptr);

	return 0;
}