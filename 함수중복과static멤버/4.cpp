// Chapter 6, Example 6-7
// 형 변환으로 인한 함수 중복의 모호성
#include <iostream>
using namespace std;

float square(float a) {
	return a * a;
}

double square(double a) {
	return a * a;
}

int main() {

	cout << square(3.0) << endl; // square(double a); 호출
	cout << square((float)3) << endl; // square(3)시 컴파일 오류
}