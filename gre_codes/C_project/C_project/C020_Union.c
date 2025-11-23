#include<stdio.h>
union Data {
	int iVal;
	float fVal;
	char cVal;
};

int main020(void) {
	union Data data;
	data.cVal = 'A';
	data.fVal = 3.14;
	
	data.iVal = 100;
	
	printf("val==%d\n", data.iVal);
	printf("val==%.2f\n", data.fVal);
	printf("val==%c\n", data.cVal);
	return 0;
}