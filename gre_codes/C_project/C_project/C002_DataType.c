#include<stdio.h>


enum Day {
	SUNDAY,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATADAY
};

enum ErrorCode {
	SUCCESS=0,
	ERROR_NOT_FOUND=404,
	ERROR_SERVER = 505
};


int main002(void) {
	/*int a = 10;
	unsigned int b = 20;
	short c = -5;
	long d = 10000L;
	long long e = 100000000LL;
	printf("a== %d\n", a);
	printf("b==%u\n", b);
	printf("c==%d\n", c);
	printf("d==%ld\n", d);
	printf("e==%lld\n", e);

	float pi = 3.14f;
	double f = 2.222223;
	long double phi = 1.22222l;
	printf("pi==%.2f\n", pi);
	printf("f==%.9lf\n", f);
	printf("phi==%.12llf\n", phi);*/

	/*char letter = 'A';
	unsigned uchar = 200;
	signed schar = -100;
	printf("letter == %c\n", letter);
	printf("uchar==%u\n", uchar);
	printf("schar==%d\n", schar);*/

	enum Day today = WEDNESDAY;
	printf("day number==%d\n", today);
	if (today == WEDNESDAY)
	{
		printf("it's middle of the week!\n");
	}

	enum ErrorCode errorCode = SUCCESS;
	printf("error code :%d\n", errorCode);

	return 0;
}

