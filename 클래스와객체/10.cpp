//Ramdom class
//실습문제 5,6,7번(동일 주제)
//짝수 홀수 선택 생성자
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
	SelectableRandom(int, int); //1번 2번
	int next();
	int nextInrange(int, int);
};

SelectableRandom::SelectableRandom() : SelectableRandom(0, 0) {}
SelectableRandom::SelectableRandom(int allmode, int rangemode) {
	first = allmode; second = rangemode;
}
int SelectableRandom::next() {

	int temp;

	if (first == 0) { //짝수
		do {
			temp = rand();
			if (temp % 2 == 0) {
				return rannum = temp;
			}
		} while (temp % 2 != 0);
	}
	else if (first == 1) { //홀수
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

	if (second == 0) { //짝수
		do {
			temp = rand() % (end - start + 1) + start;
			if (temp % 2 == 0) {
				return rannum = temp;
			}
		} while (temp % 2 != 0);
	}
	else if (second == 1) { //홀수
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

	cout << "1번째 난수 생성에서 짝수는 0, 홀수는 1을 입력하세요: " << endl;
	cin >> first;
	cout << "2번째 난수 생성에서 짝수는 0, 홀수는 1을 입력하세요: " << endl;
	cin >> second;

	SelectableRandom r(first, second);

	if (first == 0) str = "짝수";
	else str = "홀수";

	cout << endl << "-- 0에서 " << RAND_MAX << "까지의 " << str << "인 랜덤 정수 " << "10개 --" << endl; //RAND_MAX상수 32767
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}

	if (second == 0) str = "짝수";
	else str = "홀수";

	cout << endl << endl << "-- 2에서 " << "9까지의 " << str << "인 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInrange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}