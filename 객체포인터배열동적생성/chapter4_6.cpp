// �ǽ� ���� 4_6
// string class, ���� ������
#include <iostream>
#include <string>
using namespace std;

class Change_word {
	string s, temp;
public:
	Change_word();
	void Input_word();
	void change_word();
	void show();
};

Change_word::Change_word() {}
void Change_word::Input_word() {

	cout << "�Ʒ��� �� ���� �Է��ϼ���." << endl;
	cout << ">> ";
	getline(cin, s, '\n');
}
void Change_word::change_word() {

	// ���1
	int len = s.length();

	for (int i = 0; i < len; i++) {
		string last = s.substr(len - 1 - i, 1);

		temp = temp + last;
	}

	// ���2
	/*int len = s.length();

	for (int i = 0; i < len; i++) {

		int tmp = s.length();
		string last = s.substr(tmp-1, 1);
		s.erase(tmp - 1, 1);

		temp = temp + last;
	}*/

}
void Change_word::show() {
	cout << ">> " << temp << endl;
}

int main() {

	Change_word one;
	one.Input_word();
	one.change_word();
	one.show();

}