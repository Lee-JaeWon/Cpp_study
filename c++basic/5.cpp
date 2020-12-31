//cin으로 문자열을 받을때의 허점
// --> cin.getline()을 이용
#include <iostream>
using namespace std;

int main()
{
	cout << "주소를 입력하세요 : ";

	char address[100];
	cin.getline(address, 100, '\n'); //형식 cin.getline(char buf[], int size, char delimitChar)
	//delimitChar의 Default값은 \n이다. -> 생략가능

	cout << "주소는 " << address << " 입니다." << endl;

	return 0;
}