#include<stdio.h>

int main011(void) {
	int i = 0;
	//for (;;)
	//int i = 10;
	while(3)
	{
		printf("* ");
		i++;
		if (i==10)
		{
			continue;
		}
		if (i == 20) {
			break;
		}
	}

	/*int i = 10;
	while (i) {
		printf("* ");
		i--;
	}*/
	return 0;
}