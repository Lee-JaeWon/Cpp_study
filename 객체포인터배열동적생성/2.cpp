//c++ ���� �޸� �Ҵ� �� ��ȯ
//new�� delete ������
#include <iostream>
using namespace std;

int main() {

	cout << "�Է��� ������ ������?" << endl;
	int n;
	cin >> n;
	if (n <= 0) return 0;

	cout << endl;

	int* p = new int[n]; // n���� ���� �迭 ���� �Ҵ�
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�." << endl;
		return 0;
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "��° ����: ";
		cin >> p[i];
	}

	cout << endl;

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += p[i];

	cout << "���� = " << sum << endl;
	cout << "��� = " << sum / n << endl;

	delete[] p; // �迭 �޸� ��ȯ
}