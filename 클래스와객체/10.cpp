//Ramdom class
//�ǽ����� 5,6,7��(���� ����)
//¦�� Ȧ�� ���� ������
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
private:
	int rannum;
	int first, second;
public:
	SelectableRandom();
	SelectableRandom(int, int); //1�� 2��
	int next();
	int nextInrange(int, int);
};

SelectableRandom::SelectableRandom() : SelectableRandom(0, 0) {}
SelectableRandom::SelectableRandom(int allmode, int rangemode) {
	first = allmode; second = rangemode;
}
int SelectableRandom::next() {

	int temp;

	if (first == 0) { //¦��
		do {
			temp = rand();
			if (temp % 2 == 0) {
				return rannum = temp;
			}
		} while (temp % 2 != 0);
	}
	else if (first == 1) { //Ȧ��
		do {
			temp = rand();
			if (temp % 2 != 1) {
				return rannum = temp;
			}
		} while (temp % 2 == 1);
	}
}
int SelectableRandom::nextInrange(int start, int end) {

	int temp;

	if (second == 0) { //¦��
		do {
			temp = rand() % (end - start + 1) + start;
			if (temp % 2 == 0) {
				return rannum = temp;
			}
		} while (temp % 2 != 0);
	}
	else if (second == 1) { //Ȧ��
		do {
			temp = rand() % (end - start + 1) + start;
			if (temp % 2 == 1) {
				return rannum = temp;
			}
		} while (temp % 2 != 1);
	}
}

int main() {

	srand((unsigned int)time(0));

	int first, second;
	string str;

	cout << "1��° ���� �������� ¦���� 0, Ȧ���� 1�� �Է��ϼ���: " << endl;
	cin >> first;
	cout << "2��° ���� �������� ¦���� 0, Ȧ���� 1�� �Է��ϼ���: " << endl;
	cin >> second;

	SelectableRandom r(first, second);

	if (first == 0) str = "¦��";
	else str = "Ȧ��";

	cout << endl << "-- 0���� " << RAND_MAX << "������ " << str << "�� ���� ���� " << "10�� --" << endl; //RAND_MAX��� 32767
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}

	if (second == 0) str = "¦��";
	else str = "Ȧ��";

	cout << endl << endl << "-- 2���� " << "9������ " << str << "�� ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInrange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}