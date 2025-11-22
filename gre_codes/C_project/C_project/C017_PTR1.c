#include<stdio.h>

void showArr(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", arr[i]);
	}
}

int main017(void) {
	int arr[5] = { 1,2,3,4,5 };
	int size = sizeof(arr) / sizeof(arr[1]);
	showArr(arr, size);
	char* frutis[] = { "aaa","bbb","ccc" };
	for (int i = 0; i < 3; i++)
	{
		printf("f==%s\n", frutis[i]);
	}
	//int* ptr = arr;
	//printf("%p\n", ptr);
	////arr = ptr;
	//ptr = &arr[1];
	//printf("%p\n", ptr);
	//printf("%zu\n", sizeof(arr));
	//printf("%zu\n", sizeof(ptr));
	/*printf("%p--%p\n", arr, ptr);
	printf("%d-%d\n", arr[0], *ptr);
	printf("%d-%d\n", arr[1], *(ptr+1));*/
	/*printf("ptr==%p\n", ptr);
	printf("ptr+1==%p\n", ptr + 1);
	printf("*ptr==%d\n", *ptr);
	printf("*ptr+1==%d\n", *(ptr + 1));*/

	/*int* ptr1;
	float* ptr2;
	char* ptr3;
	printf("%zu\n", sizeof(ptr1));
	printf("%zu\n", sizeof(ptr2));
	printf("%zu\n", sizeof(ptr3));*/

	/*int var = 20;
	int* ptr;
	ptr = &var;
	printf("%p\n", ptr);
	printf("%d\n", *ptr);*/
	return 0;
}