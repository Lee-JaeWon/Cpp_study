//������ ����������.
#include <iostream>
#include <string>
using namespace std;

void introGame();
int CompareResult(string, string);

int main()
{
	introGame();

	int res;
	do {
		string L;
		cout << "�ι̿� >> ";
		cin >> L;

		string J;
		cout << "�ٸ��� >> ";
		cin >> J;

		res = CompareResult(L, J);

		if (res == 0)
			cout << "�����ϴ�. �ٽ� �����մϴ�." << endl << endl;

	} while (res == 0);

	if (res == 1)
		cout << "�ι̿��� �¸�." << endl;
	if (res == 2)
		cout << "�ٸ����� �¸�." << endl;

	return 0;
}

void introGame()
{
	cout << "���� ���� �� ������ �����մϴ�. " << "����, ����, �� �߿��� �Է��ϼ���." << endl;
}

int CompareResult(string L, string J)
{
	if ((L == "����" && J == "��")
		|| (L == "��" && J == "����")
		|| (L == "����" && J == "����"))
		return 1;
	else if (L == J)
		return 0;
	else
		return 2;
}