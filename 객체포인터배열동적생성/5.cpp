//문자열 입력 받고 회전시키기
#include <iostream>
#include <string>
using namespace std;

int main() {

	string s;

	cout << "문자열을 입력하세요. (빈 칸이 있어도 되며 한글은 입력 불가) " << endl;
	getline(cin, s, '\n');
	int len = s.length();

	for (int i = 0; i < len; i++) {
		string first = s.substr(0, 1);
		string left = s.substr(1, len - 1);
		s = left + first;
		cout << s << endl;
	}
}