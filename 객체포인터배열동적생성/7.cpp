// ���ڿ� ã�� �� ��ü
#include <iostream>
#include <string>
using namespace std;

int main() {

	string s;
	cout << endl << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�." << endl;
	getline(cin, s, '&');
	cin.ignore();

	string f, r;
	cout << endl << "find : ";
	getline(cin, f, '\n');
	cout << endl << "replace : ";
	getline(cin, r, '\n');

	int start_index = 0;
	while (true) {
		int s_index = s.find(f, start_index);
		if (s_index == -1) break;

		int f_length = f.length();
		//s.replace(s_index, f_length, r); �� ��� ����
		s.erase(s_index, f_length);
		s.insert(s_index, r);
	}
	cout << endl << s << endl;
}