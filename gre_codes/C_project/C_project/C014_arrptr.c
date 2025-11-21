#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swapValue(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swapRef(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//返回多个值
void calculate(int a, int b, int* sum, int* diff) {
	*sum = a + b;
	*diff = a - b;
}

int main014(void) {
	int a = 10;
	int b = 20;
	//swapValue(a, b);
	swapRef(&a, &b);
	printf("a==%d\n", a);
	printf("b==%d\n", b);
	int sum;
	int diff;
	calculate(a, b, &sum, &diff);
	printf("sum==%d\n", sum);
	printf("diff==%d\n", diff);

	/*char* ptr = (char *)malloc(6 * sizeof(char));
	if (ptr == NULL) {
		printf("内存分配失败！\n");
		return 1;
	}
	strcpy(ptr, "Hello");
	printf("ptr==%s\n", ptr);

	ptr[0] = 'h';
	printf("ptr==%s\n", ptr);

	free(ptr);*/

	/*char* ptr1 = "Hello";
	char* ptr2 = "Hello";
	ptr1 = "Hi";
	printf("ptr1==%s\n", ptr1);
	printf("ptr2==%s\n", ptr2);*/

	/*char arr1[] = "Hello";
	char arr2[] = "Hello";
	arr1[0] = 's';
	printf("arr1:%s\n", arr1);
	printf("arr2:%s\n", arr2);*/
	return 0;
}