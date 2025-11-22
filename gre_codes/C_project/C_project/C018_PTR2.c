#include<stdio.h>
#include<stdlib.h>

int a1(int a, int b) {
	return a + b;
}
int s1(int a, int b) {
	return a - b;
}

int m1(int a, int b) {
	return a / b;
}

void exe(int a, int b, int(*opr)(int, int)) {
	int res = opr(a, b);
	printf("res==%d\n", res);
}

int* get(int* ptr) {
	int a = 2 * (*ptr);
	return &a;
}

int* createArr(int size) {
	int* arr = (int*)malloc(size * sizeof(int));
	if (arr == NULL) {
		exit(1);
	}
	for (int i = 0; i < size; i++) {
		arr[i] = i * 10;
	}
	return arr;
}

int main(void) {
	int a[] = { 1,2,3 };
	int b[] = { 4,5,6 };
	int c[] = { 7,8,9 };
	int* arr[] = { a,b,c };
	//二级指针
	int** m = arr;
	for (int i = 0; i < 3;i++) {
		for (int j = 0; j < 3; j++) {
			//方法1
			printf("%d\n", arr[i][j]);
			//方法2
			printf("%d\n", *(arr[i] + j));
			//方法3
			printf("%d\n", *(*(arr + i) + j));
			//方法4
			printf("%d\n", *(*(m + i) + j));
		}
	}


	/*int s = 10;
	int* p = &s;
	int** q = &p;
	printf("%d\n", **q);*/

	/*int a = 10;
	void* ptr = &a;
	int* my = (int*)ptr;
	printf("%d\n", *my);*/


	/*int* ptr = (int*)calloc(5, sizeof(int));
	if (ptr == NULL) {
		return 1;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", ptr[i]);
	}
	printf("\n");
	ptr = (int*)realloc(ptr, 10 * sizeof(int));
	for (int i = 0; i < 10; i++) {
		printf("%d ", ptr[i]);
	}
	printf("\n");
	ptr = (int*)malloc(10 * sizeof(int));
	for (int i = 0; i < 10; i++) {
		ptr[i] = i * 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", ptr[i]);
	}
	free(ptr);
	ptr = NULL;*/
	


	/*int size = 5;
	int* myArr = createArr(size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", myArr[i]);
	}
	free(myArr);*/

	/*int var = 50;
	int* res = get(&var);

	printf("res==%d\n", *res);*/

	/*exe(10, 5, m1);
	exe(10, 5, a1);*/


	//定义函数指针指针返回int,接受两个Int参数
	/*int(*fptr)(int, int);
	fptr = a1;
	printf("%d\n", fptr(10, 8));
	fptr = s1;
	printf("%d\n", fptr(10, 8));*/

	//int (*ptr)(int, int);
	/*int (*funcPtr)(int, int);
	funcPtr = a1;
	printf("a1(18,16)==%d\n", funcPtr(18, 16));
	funcPtr = s1;
	printf("s1(18,16)==%d\n", funcPtr(18, 16));*/
	return 0;
}