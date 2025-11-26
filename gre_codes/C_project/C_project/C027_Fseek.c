#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int id;
	char name[20];
	float salary;
} Employee;


int main027(void) {
	FILE* fp;
	Employee emp;
	int i;
	fp = fopen("666.txt", "wb");
	if (fp == NULL) {
		perror("打开文件失败");
		return 1;
	}
	Employee e1 = { 1,"张三",5000 };
	Employee e2 = { 2,"李斯",8000 };
	Employee e3 = { 3,"赵高",10000 };
	fwrite(&e1, sizeof(Employee), 1, fp);
	fwrite(&e2, sizeof(Employee), 1, fp);
	fwrite(&e3, sizeof(Employee), 1, fp);
	fclose(fp);
	printf("员工数据已经录入\n");
	fp = fopen("666.txt", "rb");
	if (fp == NULL) {
		perror("打开文件失败");
		return 1;
	}
	//获取文件大小
	//移动指针到文件末尾
	fseek(fp, 0, SEEK_END);
	//获取指针位置，即文件字节大小
	long fileSize = ftell(fp);
	//获取雇员数量
	int empNumer = fileSize / sizeof(Employee);
	printf("一共录入了%d名员工数据\n", empNumer);
	//重置文件指针到文件首
	rewind(fp);
	//访问第二个员工信息
	int targetIndex = 1;
	if (targetIndex < empNumer) {
		//距离文件头的偏移量
		fseek(fp, targetIndex * sizeof(Employee), SEEK_SET);
		//读取第二个员工信息
		fread(&emp, sizeof(Employee), 1, fp);
		printf("第%d员工信息如下：\n", targetIndex + 1);
		printf("  ID:%d\n", emp.id);
		printf("  姓名:%s\n", emp.name);
		printf("  工资:%.2f\n", emp.salary);
	}
	else {
		printf("超过范围\n");
	}
	fclose(fp);
	return 0;
}