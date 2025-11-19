#include<stdio.h>

int main(void) {
	int number[5] = { 1,2,3,4,5 };
	int score[5] = { 1,2 };
	score[3] = 100;
	for (size_t i = 0; i < 5; i++)
	{
		/*printf("number[%d]=%d\n", i, score[i]);
		printf("socre[%d]=%d\n", i, score[i]);*/
		printf(" %d", score[i]);
		
	}



	return 0;
}