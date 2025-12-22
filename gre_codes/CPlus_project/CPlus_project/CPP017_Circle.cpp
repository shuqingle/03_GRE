#include<iostream>
using namespace std;

const double PI = 3.14;

class Circle {
public:
	int r;

public:
	double calZc() {
		return 2 * PI * r;
	}
};

class Student {
private:
	string name;
	int id;
public:
	void setName(string name) {
		this->name = name;
	}
	void setId(int id) {
		this->id = id;
	}
	void showStu() {
		cout << "name==" << this->name << " id==" << this->id << endl;
	}
};
struct School {
	string name;
};
class Person {
	string sc;
public :
	string name;
protected:
	string age;
private :
	string password;

public:
	void func() {
		this->name = "123";
		this->age = "18";
		this->password = "456";
	}
};

int main017() {
	Circle c1;
	c1.r = 10;
	cout << "zc==" << c1.calZc() << endl;
	Student st;
	st.setId(1);
	st.setName("ÕÅÈý");
	st.showStu();
	Person p;
	p.name = "666";
	p.func();
	School s;
	s.name = "123";

	return 0;
}