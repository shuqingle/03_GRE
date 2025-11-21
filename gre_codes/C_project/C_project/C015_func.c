#include<stdio.h>
#include<string.h>
#include "function.h"

int main015(void) {
	int res = add(1, 2);
	printf("res==%d\n", res);
	greet();
	/*char* str1 = "hello";
	char* str2 = "hellossss";
	char* result = getLongStr(str1, str2);
	printf("result==%s\n", result);*/
	

	return 0;
}

//char* getLongStr(char* str1, char* str2) {
//	if (strlen(str1) > strlen(str2)) {
//		return str1;
//	}
//	else {
//		return str2;
//	}
//}