#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void) {
	char a[] = "A";
	char b[] = "B";
	int result = strcmp(a, b);
	if (result>0) {
		printf("a>b");
	}
	else {
		printf("a<=b");
	}

	/*char a[] = "hello";
	char b[8]="";
	strcpy(b, a);
	printf("b==%s\n", b);
	strcat(b, "123");
	printf("b==%s\n", b);*/
	/*char str[] = "hello,word";
	size_t length;
	length = strlen(str);
	printf("length==%zu",length);

	char ss[] = "CÓïÑÔÑ§Ï°±Ê¼Ç";
	length = strlen(ss);
	printf("length==%zu", length);*/

	/*char s[5] = { 'h','e','l','l','o' };
	char str1[6] = { 'h','e','l','l','o','\0' };
	char str2[] = "hello";
	printf("s==%s\n", s);
	printf("s==%s\n", str1);
	printf("s==%s\n", str2);*/
	return 0;
}