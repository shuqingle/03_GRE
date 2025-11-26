#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	char name[50];
	int age;
	float gpd;
} Student;

int main025(void) {
	FILE* fp;
	Student s1 = { "束庆乐",36,88 };
	Student s2 = { "陈珊珊",35,68 };
	fp = fopen("333.bin", "wb");
	if (fp == NULL) {
		perror("打开文件失败");
		return 1;
	}
	//使用fwirte写入结构体数据
	fwrite(&s1, sizeof(Student), 1, fp);
	fwrite(&s2, sizeof(Student), 1, fp);
	fclose(fp);
	printf("二进制数据已写入文件\n");

	Student s3;
	int i = 0;
	fp = fopen("333.bin", "rb");
	if (fp == NULL) {
		perror("打开文件失败");
		return 1;
	}
	printf("读取二进制文件\n");
	while (fread(&s3, sizeof(Student), 1, fp) == 1) {
		printf("学生：%d\n", ++i);
		printf("姓名：%s\n", s3.name);
		printf("年龄：%d\n", s3.age);
		printf("分数：%.2f\n", s3.gpd);
	}
	fclose(fp);
	return 0;
}