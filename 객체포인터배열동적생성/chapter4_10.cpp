// �ǽ� ���� 4_10
// ���� Ŭ���� Ȱ��
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
	name = "���Է�";
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
	Person* p; // Person �迭 ������
	int size;
public:
	Family(string, int);
	void show(); //������ ��ü ���
	void setName(int, string);
	~Family();
};

Family::Family(string name, int size) {
	this->First_Name = name;
	this->size = size;
	p = new Person[this->size];
}
void Family::show() {
	cout << First_Name << "������ ������ ���� " << size << "�� �Դϴ�." << endl;

	for (int i = 0; i < this->size; i++)
		cout << p[i].getName() << '\t';

	cout << endl;
}
Family::~Family() {
	delete[] p; //��ü �迭 �Ҵ� ����
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