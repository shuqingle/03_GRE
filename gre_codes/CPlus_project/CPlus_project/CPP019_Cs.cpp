#include<iostream>
using namespace std;

class Area {
public:
	Area() {
		cout << "构造" << endl;
	}
	~Area() {
		cout << "析构" << endl;
	}
};

class Plan {
public:
	int age;
public:
	Plan() {
		cout << "plan构造" << endl;
	}
	Plan(int a) {
		age = a;
		cout << "plan有参构造" << endl;
	}
	Plan(const Plan& p) {
		age = p.age;
		cout << "plan拷贝构造" << endl;
	}
	~Plan() {
		cout << "plan析构" << endl;
	}
};


int main(void) {

	//Area area;
	Plan p;
	Plan p2(10);
	Plan p3(p2);
	Plan p4 = Plan(p);
	Plan p5 = 10;
	return 0;
}
