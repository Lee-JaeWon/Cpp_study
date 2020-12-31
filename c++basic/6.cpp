//문자열 입력 두번째
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string song("Falling in love with you"); //문자열 song
	string elvis("Elvis Presley");
	string singer;

	cout << song + "를 부른 가수는";
	cout << "(힌트 : 첫글자는 " << elvis[0] << ")?" << endl;

	getline(cin, singer);
	if (singer == elvis)
		cout << "맞았습니다.";
	else
		cout << "틀렸습니다. " + elvis + "입니다. " << endl;

	return 0;
}