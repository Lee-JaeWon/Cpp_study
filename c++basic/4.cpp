//간단한 비밀번호 입력
#include <iostream>
#include <cstring> //strcmp사용 헤더 파일
using namespace std;

int main()
{
	char password[11];
	cout << "프로그램을 종료하라면 암호를 입력하세요." << endl;
	while (true) {
		cout << "암호 : "; //스트림 추출 연산자 <<
		cin >> password;
		if (strcmp(password, "C++") == 0) {
			cout << "프로그램을 종료합니다." << endl;
			break;
		}
		else
			cout << "암호가 틀립니다." << endl;
	}
	return 0;
}