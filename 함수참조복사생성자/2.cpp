// Chapter 5, Example
// 참조 리턴
#include <iostream>
using namespace std;

// 참조를 리턴하는 함수
char& find(char s[], int index) {
	return s[index];
}

int main() {

	char name[] = "Mike";
	cout << name << endl;

	find(name, 0) = 'S'; // M = 's'로 변경
	cout << name << endl;

	char& ref = find(name, 2); // ref는 name[2]에 대한 참조
	ref = 't';
	cout << name << endl;

}