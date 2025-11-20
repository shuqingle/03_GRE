#include<stdio.h>

int main012(void) {
	int martrix[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	martrix[2][3] = 25;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", martrix[i][j]);
		}
	}

	//int number[5] = { 1,2,3,4,5 };
	//int score[5] = { 1,2 };
	//score[3] = 100;
	//for (size_t i = 0; i < 5; i++)
	//{
	//	/*printf("number[%d]=%d\n", i, score[i]);
	//	printf("socre[%d]=%d\n", i, score[i]);*/
	//	printf(" %d", score[i]);
	//	
	//}

	/*int arr1[5] = {1,2};
	int arr2[] = {3,4,5};
	int arr3[5] = { 0 };
	for (int i = 0; i < 5; i++) {
		printf("arr1[%d]==%d ", i, arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < 3; i++) {
		printf("arr2[%d]==%d ", i, arr3[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++) {
		printf("arr3[%d]==%d ", i, arr3[i]);
	}
	printf("%d", arr3[5]);*/


	return 0;
}