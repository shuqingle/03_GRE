#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main028(void) {
	FILE* fp;
	char buffer[100];
	fp = fopen("777.txt", "r");
	if (fp == NULL) {
		perror("打开文件失败");
		return 1;

	}
	if (fgets(buffer, sizeof(buffer), fp) == NULL) {
		if (feof(fp)) {
			printf("文件为空，或已经达到文件末尾\n");
		}
		else if (ferror(fp)) {
			perror("读取文件时发生失败");
		}
		fclose(fp);
		return 1;
	}
	printf("读取的内容是:%s\n", buffer);
	if (fclose(fp) != 0) {
		perror("关闭文件失败");
		return 1;
	}
	return 0;
}