// Chapter 5, Example
// 묵시적 복사 생성
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Person {
	char* name;
	int id;
public:
	Person(int, const char*); //생성자
	Person(const Person&); //복사 생성자
	~Person();
	void changeName(const char*);
	void show();
};

Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}
Person::Person(const Person& person) { // 사용자 복사 생성자
	this->id = person.id;
	int len = strlen(person.name);
	this->name = new char[len + 1];
	strcpy(this->name, person.name);
	cout << "복사 생성자 실행. 원본 객체의 이름 " << this->name << endl;
}
Person::~Person() {
	if (name)
		delete[] name;
}
void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}
void Person::show() {
	cout << id << ',' << name << endl;
}

void f(Person person) {
	person.changeName("dummy");
}

Person g() {
	Person mother(2, "Jane");
	return mother;
}

int main() {
	Person father(1, "kitae");
	Person son = father; // 복사 생성자 호출
	f(father); // 복사 생성자 호출
	g(); // 복사 생성자 호출]
}