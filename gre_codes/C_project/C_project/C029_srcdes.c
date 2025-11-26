#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	FILE* src, * dest;
	int ch;
	src = fopen("777.txt", "r");
	if (src == NULL) {
		perror("打开文件失败");
		return 1;
	}
	dest = fopen("888.txt", "w");
	if (dest == NULL) {
		perror("打开文件失败");
		fclose(src);
		return 1;
	}
	//复制文件
	while ((ch = fgetc(src)) != EOF) {
		if (fputc(ch, dest) == EOF) {
			perror("写入文件发生错误");
			fclose(src);
			fclose(dest);
			return 1;
		}
	}
	//检查读取是否因为错误而结束
	if (ferror(src)) {
		perror("读取文件时发生错误");
	}
	//关闭文件
	if (fclose(src) != 0) {
		perror("关闭源文件时发生错误");
	}
	if (fclose(dest) != 0) {
		perror("关闭目标文件时发生错误");
	}
	printf("文件复制完成");
	return 0;
}