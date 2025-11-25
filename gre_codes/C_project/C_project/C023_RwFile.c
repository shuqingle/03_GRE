#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	FILE* fp;
	char buffer[100];
	char name[50];
	int age;
	float score;
	fp = fopen("111.txt", "r");
	if (fp == NULL) {
		perror("打开文件失败");
		return 1;
	}
	printf("使用fgets读取文件内容\n");
	while (fgets(buffer, sizeof(buffer), fp) != NULL) {
		printf("%s", buffer);
	}
	printf("\n");
	//重置文件指针到开头
	rewind(fp);
	//使用fscanf读取格式化文件
	printf("使用fscanf读取文件内容\n");
	fscanf(fp, "姓名:%s\n", &name);
	fscanf(fp, "年龄:%d\n", &age);
	fscanf(fp, "成绩:%f\n", &score);
	printf("姓名:%s\n", name);
	printf("年龄:%d\n", age);
	printf("成绩:%.3f\n", score);
	return 0;
}