// Chapter 6, Example 6-8, 6-9
// ���� �Ű� ������ ���� �Լ� �ߺ��� ��ȣ��
// ����Ʈ �Ű� ������ ���� �Լ� �ߺ��� ��ȣ��
#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}
int add(int a, int& b) {
	b += a;
	return b;
}

void msg(int id) {
	cout << id << endl;
}
void msg(int id, string s = "") {
	cout << id << ":" << s << endl;
}

int main() {
	msg(5, "Good Morning");
	msg(6); // �Լ� ȣ�� ��ȣ, ������ ����

	int s = 10, t = 20;
	cout << add(s, t); // ���� �Ű� ������ ���� ȣ�� ��ȣ, ������ ����
}