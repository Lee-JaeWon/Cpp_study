//cin���� ���ڿ��� �������� ����
// --> cin.getline()�� �̿�
#include <iostream>
using namespace std;

int main()
{
	cout << "�ּҸ� �Է��ϼ��� : ";

	char address[100];
	cin.getline(address, 100, '\n'); //���� cin.getline(char buf[], int size, char delimitChar)
	//delimitChar�� Default���� \n�̴�. -> ��������

	cout << "�ּҴ� " << address << " �Դϴ�." << endl;

	return 0;
}