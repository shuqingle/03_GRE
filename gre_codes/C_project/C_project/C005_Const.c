#include<stdio.h>

#define PI 3.1415
#define MAX_SIZE 100

#define SQURE(X)((X)*(X))

const int DAY_IN_WEEK = 7;

int main005(void) {
	float area;
	float ratios = 5.0f;
	area = PI * ratios * ratios;
	printf("area==%.2f\n", area);
	printf("max_size==%d\n", MAX_SIZE);
	int num = 4;
	int result = SQURE(num);
	printf("result==%d\n", result);

	const float se = 31.2f;
	//se = 2.2f;
	printf("se==%.2f\n", se);
	//DAY_IN_WEEK = 20;
	printf("day_in_week=%d\n", DAY_IN_WEEK);
	return 0;
}