#include<iostream>

using namespace std;
struct Student {
	string name;
	int age;
	int score;

} st3;

void print1(Student stu) {
	cout << "姓名==" << stu.name << ";年龄==" << stu.age << ";得分==" << stu.score << endl;
}
void print2(Student* stu) {
	cout << "姓名==" << stu->name << ";年龄==" << stu->age << ";得分==" << stu->score << endl;
}
void setStu1(Student stu) {
	stu.name = "账单1";
}
void setStu2(Student* stu) {
	stu->name = "账单2";
}
void print3(const Student* stu) {
	//stu->age = 100;
	cout << "姓名==" << stu->name << ";年龄==" << stu->age << ";得分==" << stu->score << endl;
}

int main(void) {
	struct Student st1;
	st1.name = "张三";
	st1.age = 18;
	st1.score = 100;
	Student st2 = { "里斯",100,100 };
	st3.name = "王五";
	st3.age = 180;
	st3.score = 100;
	cout << "姓名==" << st1.name << ";年龄==" << st1.age << ";得分==" << st1.score << endl;
	cout << "姓名==" << st2.name << ";年龄==" << st2.age << ";得分==" << st2.score << endl;
	cout << "姓名==" << st3.name << ";年龄==" << st3.age << ";得分==" << st3.score << endl;

	struct Student arr[] = {
		{ "里斯1",100,100 },
		{ "里斯2",200,200 },
		{ "里斯3",300,300 }
	};
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名==" << arr[i].name << ";年龄==" << arr[i].age << ";得分==" << arr[i].score << endl;
	}
	struct Student* ptr = &st3;
	cout << "姓名==" << ptr->name << ";年龄==" << ptr->age << ";得分==" << ptr->score << endl;
	cout << "-------------------------" << endl;
	print1(st3);
	print2(&st3);
	cout << "-------------------------" << endl;
	setStu1(st3);
	print1(st3);
	print2(&st3);
	cout << "-------------------------" << endl;
	setStu2(&st3);

	print1(st3);
	print2(&st3);
	return 0;
}