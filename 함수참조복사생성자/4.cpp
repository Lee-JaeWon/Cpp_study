// Chapter 5, Example
// ������ ��� ���� ���� ���� ���� �������� ������
// ����Ʈ ���� ������ �ڵ� ����
// ��Ÿ�� ����
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
	Person daughter(father); // daughter�� name �����Ϳ��� father�� name �����Ͱ� ����Ǿ�
								// father�� �Ҵ���� �޸𸮸� �Բ� ����Ų��. // ������ ����

	cout << "daughter ��ü ���� ���� ----" << endl;

	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "daughter �̸��� Grace�� ������ �� ----" << endl;

	father.show();
	daughter.show();

	return 0;

}