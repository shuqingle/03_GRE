#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Address {
	char city[50];
	char country[50];
};

typedef struct {
	char name[50];
	int age;
	float gpa;
	struct Address addr;
} Student;



int main019(void) {
	Student stu = { "王五",20,35.2 };
	
	stu.age = 18;
	stu.gpa = 20.5;
	printf("name==%s\n", stu.name);
	printf("age==%d\n", stu.age);
	printf("gpa==%.2lf\n", stu.gpa);
	strcpy(stu.name, "路西");
	//stu.name = "路西";
	printf("name==%s\n", stu.name);
	struct Address addr = { "中国","安徽" };
	stu.addr = addr;
	printf("addr==%s-%s\n", stu.addr.country, stu.addr.city);
	strcpy(stu.addr.city, "美国");
	strcpy(stu.addr.country, "芝加哥");

	printf("addr==%s-%s\n", stu.addr.country, stu.addr.city);
	Student* ptr = &stu;
	printf("name==%s\n", ptr->name);

	Student stuArr[] = {
		{"张三",18,10},
		{"李四",20,20},
		{"王五",30,30}
	};
	Student* pp = &stuArr;
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", i);
		pp = pp + i;
		printf("%s\n", pp->name);
		printf("%d\n", pp->age);
		printf("%.2f\n", pp->gpa);
	}
	return 0;
}