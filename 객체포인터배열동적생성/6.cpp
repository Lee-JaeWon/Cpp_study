//���ڿ� �Լ��� ��� �� ����
#include <iostream>
#include <string>
using namespace std;

int main() {

	string s;

	cout << "75+123+87+412+54 �� ���� ���� ���ڿ��� �Է��ϼ���." << endl;
	getline(cin, s, '\n');

	int sum = 0;
	int startIndex = 0;

	while (true) {
		int fIndex = s.find('+', startIndex);

		//������ ������ ��� �ڿ� ���̻� +�� ���⿡ �ʿ��� ��ġ.
		if (fIndex == -1) { // '+'�� �߰����� ����
			string part = s.substr(startIndex);
			if (part == "") break;  //���ڿ��� '+'�� ������ ��� //ex) 65+8+
			cout << part << endl;
			sum += stoi(part);
			break;
		}

		int count = fIndex - startIndex;
		string part = s.substr(startIndex, count);

		cout << part << endl;
		sum += stoi(part);
		startIndex = fIndex + 1;
	}
	cout << "���ڵ��� ���� " << sum << endl;
}