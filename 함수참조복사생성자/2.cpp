// Chapter 5, Example
// ���� ����
#include <iostream>
using namespace std;

// ������ �����ϴ� �Լ�
char& find(char s[], int index) {
	return s[index];
}

int main() {

	char name[] = "Mike";
	cout << name << endl;

	find(name, 0) = 'S'; // M = 's'�� ����
	cout << name << endl;

	char& ref = find(name, 2); // ref�� name[2]�� ���� ����
	ref = 't';
	cout << name << endl;

}