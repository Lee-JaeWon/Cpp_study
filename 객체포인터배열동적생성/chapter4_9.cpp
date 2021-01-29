// 실습 문제 4_9
// 간단한 데이터베이스 관리 및 검색
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
	name = "이름 미입력";
	tel = "번호 미입력";
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

	cout << "이름과 전화 번호를 입력해 주세요" << endl << "(이름 입력 후 스페이스바 입력 후 번호 입력)" << endl;
	cout << "ex) 스폰지밥 010-0000-0000" << endl;

	int num = 3;

	Person* DB = new Person[num];
	string name, tel;
	for (int i = 0; i < num; i++) {
		cout << "이름 >> ";
		getline(cin, name, ' ');
		getline(cin, tel, '\n');
		DB[i].set(name, tel);
	}
	cout << endl;

	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < num; i++) {
		cout << DB[i].get_Name();
		cout << ' ';
	}
	cout << endl;

	int temp;
	cout << endl << "전화번호를 검색합니다. 이름을 입력하세요 >> ";
	cin >> name;
	for (int i = 0; i < num; i++) {
		if (DB[i].get_Name() == name)
			temp = i;
	}
	cout << endl;

	cout << "전화 번호는 ";
	cout << DB[temp].get_Tel() << endl;
}