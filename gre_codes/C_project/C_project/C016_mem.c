#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	int arr[] = { 1,2,3 };
	int arr2[] = { 1,2,3 };
	int* my = (int*)malloc(sizeof(int) * 3);
	memcpy(my, arr, sizeof(int) * 3);
	memmov(my, arr, sizeof(int) * 3);
	for (int i = 0; i < 3; i++) {
		printf("%d\n", my[i]);
	}
	//int res = memcmp(arr, arr2);

	/*int* p = (int *)malloc(sizeof(int) * 10);
	memset(p, 0, 40);
	char ch[10];
	char* ptr = &ch;
	memset(ch, 'a', sizeof(char) * 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d", ch[i]);
	}
	printf("%s", ptr);*/
	return 0;
}