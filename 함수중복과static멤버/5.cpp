// Chapter 6, Example 6-8, 6-9
// 참조 매개 변수로 인한 함수 중복의 모호성
// 디폴트 매개 변수로 인한 함수 중복의 모호성
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
	msg(6); // 함수 호출 모호, 컴파일 오류

	int s = 10, t = 20;
	cout << add(s, t); // 참조 매개 변수로 인해 호출 모호, 컴파일 오류
}