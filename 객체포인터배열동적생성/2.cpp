//c++ 동적 메모리 할당 및 반환
//new와 delete 연산자
#include <iostream>
using namespace std;

int main() {

	cout << "입력할 정수의 개수는?" << endl;
	int n;
	cin >> n;
	if (n <= 0) return 0;

	cout << endl;

	int* p = new int[n]; // n개의 정수 배열 동적 할당
	if (!p) {
		cout << "메모리를 할당할 수 없습니다." << endl;
		return 0;
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 정수: ";
		cin >> p[i];
	}

	cout << endl;

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += p[i];

	cout << "총합 = " << sum << endl;
	cout << "평균 = " << sum / n << endl;

	delete[] p; // 배열 메모리 반환
}