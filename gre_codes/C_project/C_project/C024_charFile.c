#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main024(void) {
	FILE* fp;
	fp = fopen("222.txt", "w");
	if (fp == NULL) {
		perror("打开文件失败");
		return 1;
	}
	fputc('H', fp);
	fputc('a', fp);
	fputc('r', fp);
	fputc('r', fp);
	fputc('y', fp);

	fclose(fp);

	fp = fopen("222.txt","r");
	if (fp == NULL) {
		perror("打开文件失败");
		return 1;
	}
	printf("文件内容\n");
	int ch;
	
	while ((ch = fgetc(fp)) != EOF) {
		putchar(ch);
	}
	fclose(fp);
	return 0;
}