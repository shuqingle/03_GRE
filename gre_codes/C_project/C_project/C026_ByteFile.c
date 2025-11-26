#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main026(void) {
	FILE* fp;
	char data[] = "Hello harry port";
	size_t dataSize = sizeof(data);
	fp = fopen("555.bin", "wb");
	if (fp == NULL) {
		perror("打开文件失败");
		return 1;
	}
	fwrite(data, sizeof(char), dataSize, fp);
	fclose(fp);
	printf("字节数据已写入文件\n");
	fp = fopen("555.bin", "rb");
	if (fp == NULL) {
		perror("打开文件失败");
		return 1;
	}
	char buffer[100];
	fread(buffer, sizeof(char), dataSize, fp);
	fclose(fp);
	printf("读取的字节内容:%s\n", buffer);

	return 0;
}