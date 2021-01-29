// 실습 문제 4_10
// 다중 클래스 활용
#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person();
	Person(string);
	string getName();
	void setName(string);
};

Person::Person() {
	name = "미입력";
}
Person::Person(string name) {
	this->name = name;
}
string Person::getName() {
	return name;
}
void Person::setName(string name) {
	this->name = name;
}

class Family {
	string First_Name;
	Person* p; // Person 배열 포인터
	int size;
public:
	Family(string, int);
	void show(); //구성원 전체 출력
	void setName(int, string);
	~Family();
};

Family::Family(string name, int size) {
	this->First_Name = name;
	this->size = size;
	p = new Person[this->size];
}
void Family::show() {
	cout << First_Name << "가족은 다음과 같이 " << size << "명 입니다." << endl;

	for (int i = 0; i < this->size; i++)
		cout << p[i].getName() << '\t';

	cout << endl;
}
Family::~Family() {
	delete[] p; //객체 배열 할당 해제
}
void Family::setName(int num, string name) {
	p[num].setName(name);
}

int main() {

	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;

}