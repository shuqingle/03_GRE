#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(void) {
	printf("char:\n");
	printf("signed char :%d to %d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char :0 to %u\n", UCHAR_MAX);

	printf("short:\n");
	printf("signed short :%d to %d\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short : 0 to %u\n", USHRT_MAX);

	printf("int :\n");
	printf("signed int :%d to %d\n", INT_MIN, INT_MAX);
	printf("unsigned int 0 to %u\n", UINT_MAX);

	printf("long \n");
	printf("signed long==%ld,%ld\n", LONG_MIN, LONG_MAX);
	printf("usigned long ==0 ,%u\n", ULONG_MAX);

	printf("long long %lld,%lld,%llu", LLONG_MIN, LLONG_MAX, ULLONG_MAX);
	printf("double:%e,%e,%d\n", FLT_MIN, FLT_MAX, FLT_DIG);
	return 0;
}