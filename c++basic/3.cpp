//������ ��й�ȣ �Է�
#include <iostream>
#include <cstring> //strcmp��� ��� ����
using namespace std;

int main()
{
	char password[11];
	cout << "���α׷��� �����϶�� ��ȣ�� �Է��ϼ���." << endl;
	while (true) {
		cout << "��ȣ : "; //��Ʈ�� ���� ������ <<
		cin >> password;
		if (strcmp(password, "C++") == 0) {
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		}
		else
			cout << "��ȣ�� Ʋ���ϴ�." << endl;
	}
	return 0;
}