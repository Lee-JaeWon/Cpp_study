// Chapter 6
// static ��� ��� : ��ü�� ����� ���� �� static ����� ����
#include <iostream>
using namespace std;

class Person {

public:
	int money;
	void add_Money(int money) {
		this->money = money;
	}

	static int shared_Money;
	static void add_Shared(int n) {
		shared_Money += n;
	}
};

// static ���� ����, ���� ����
int Person::shared_Money = 10; // 10���� �ʱ�ȭ

// main
int main() {

	Person Han;
	Han.money = 100;
	Han.shared_Money = 200; // static ��� ����, ���� = 200���� �ʱ�ȭ

	Person Lee;
	Lee.money = 150;
	Lee.add_Money(200);
	Lee.add_Shared(200);
	Person::shared_Money = 300;
	Person::add_Shared(100);

	cout << Han.money << ' '
		<< Lee.money << endl;
	cout << Han.shared_Money << ' '
		<< Lee.shared_Money << endl;
}