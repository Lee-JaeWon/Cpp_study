//���ڿ� �Է� �ް� ȸ����Ű��
#include <iostream>
#include <string>
using namespace std;

int main() {

	string s;

	cout << "���ڿ��� �Է��ϼ���. (�� ĭ�� �־ �Ǹ� �ѱ��� �Է� �Ұ�) " << endl;
	getline(cin, s, '\n');
	int len = s.length();

	for (int i = 0; i < len; i++) {
		string first = s.substr(0, 1);
		string left = s.substr(1, len - 1);
		s = left + first;
		cout << s << endl;
	}
}