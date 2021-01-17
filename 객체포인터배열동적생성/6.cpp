//문자열 함수의 사용 및 응용
#include <iostream>
#include <string>
using namespace std;

int main() {

	string s;

	cout << "75+123+87+412+54 와 같이 덧셈 문자열을 입력하세요." << endl;
	getline(cin, s, '\n');

	int sum = 0;
	int startIndex = 0;

	while (true) {
		int fIndex = s.find('+', startIndex);

		//마지막 덧셈의 경우 뒤에 더이상 +가 없기에 필요한 장치.
		if (fIndex == -1) { // '+'를 발견하지 못함
			string part = s.substr(startIndex);
			if (part == "") break;  //문자열이 '+'로 끝나는 경우 //ex) 65+8+
			cout << part << endl;
			sum += stoi(part);
			break;
		}

		int count = fIndex - startIndex;
		string part = s.substr(startIndex, count);

		cout << part << endl;
		sum += stoi(part);
		startIndex = fIndex + 1;
	}
	cout << "숫자들의 합은 " << sum << endl;
}