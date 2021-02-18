// Chapter 6, Example 6-2
// 함수 중복
// 매개 변수 이름과 개수 유의
// --> 컴파일러는 중복 함수 구분시 리턴 타입 고려x
#include <iostream>
using namespace std;

//함수 중복
int sum(int a, int b);
int sum(int a);

int main() {

	cout << sum(3, 5) << endl;
	cout << sum(3) << endl;
	cout << sum(100) << endl;
}

int sum(int a, int b) {
	int s = 0;
	for (int i = a; i <= b; i++)
		s += i;
	return s;
}
int sum(int a) {
	int s = 0;
	for (int i = 0; i <= a; i++)
		s += i;
	return s;
}