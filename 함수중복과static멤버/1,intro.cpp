/*
	Writer : 이재원
	Study C++
	함수 중복과 static 멤버
*/

// Chapter 6, Example 6-3
// 디폴트 매개 변수를 가진 함수 선언 및 호출
#include <iostream>
using namespace std;

// 디폴트 매개 변수 선언
void star(int a = 5);
void msg(int id, string text = "");

int main() {

	star();
	star(10);

	msg(10);
	msg(10, "Hello");

}

void star(int a) {
	for (int i = 0; i < a; i++) cout << '*';
	cout << endl;
}
void msg(int id, string text) {
	cout << id << ' ' << text << endl;
}
