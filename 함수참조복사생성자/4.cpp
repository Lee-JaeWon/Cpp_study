// Chapter 5, Example
// 포인터 멤버 변수 사용시 얕은 복사 생성자의 문제점
// 디폴트 복사 생성자 자동 삽입
// 런타임 에러
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Person {
	char* name;
	int id;
public:
	Person(int, const char*);
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

int main() {

	Person father(1, "kitae");
	Person daughter(father); // daughter의 name 포인터에는 father의 name 포인터가 복사되어
								// father가 할당받은 메모리를 함께 가리킨다. // 공유의 문제

	cout << "daughter 객체 생성 직후 ----" << endl;

	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;

	father.show();
	daughter.show();

	return 0;

}