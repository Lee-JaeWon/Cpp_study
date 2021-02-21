// Chapter 6
// static 멤버 사용 : 객체의 멤버로 접근 및 static 멤버로 접근
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

// static 변수 생성, 전역 변수
int Person::shared_Money = 10; // 10으로 초기화

// main
int main() {

	Person Han;
	Han.money = 100;
	Han.shared_Money = 200; // static 멤버 접근, 공금 = 200으로 초기화

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