// �ǽ� ���� 4_9
// ������ �����ͺ��̽� ���� �� �˻�
#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person();
	string get_Name();
	string get_Tel();
	void set(string, string);
};
Person::Person() {
	name = "�̸� ���Է�";
	tel = "��ȣ ���Է�";
}
string Person::get_Name() {
	return name;
}
string Person::get_Tel() {
	return tel;
}
void Person::set(string name, string tel) {
	this->name = name; this->tel = tel;
}

int main() {

	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl << "(�̸� �Է� �� �����̽��� �Է� �� ��ȣ �Է�)" << endl;
	cout << "ex) �������� 010-0000-0000" << endl;

	int num = 3;

	Person* DB = new Person[num];
	string name, tel;
	for (int i = 0; i < num; i++) {
		cout << "�̸� >> ";
		getline(cin, name, ' ');
		getline(cin, tel, '\n');
		DB[i].set(name, tel);
	}
	cout << endl;

	cout << "��� ����� �̸��� ";
	for (int i = 0; i < num; i++) {
		cout << DB[i].get_Name();
		cout << ' ';
	}
	cout << endl;

	int temp;
	cout << endl << "��ȭ��ȣ�� �˻��մϴ�. �̸��� �Է��ϼ��� >> ";
	cin >> name;
	for (int i = 0; i < num; i++) {
		if (DB[i].get_Name() == name)
			temp = i;
	}
	cout << endl;

	cout << "��ȭ ��ȣ�� ";
	cout << DB[temp].get_Tel() << endl;
}