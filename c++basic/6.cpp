//���ڿ� �Է� �ι�°
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string song("Falling in love with you"); //���ڿ� song
	string elvis("Elvis Presley");
	string singer;

	cout << song + "�� �θ� ������";
	cout << "(��Ʈ : ù���ڴ� " << elvis[0] << ")?" << endl;

	getline(cin, singer);
	if (singer == elvis)
		cout << "�¾ҽ��ϴ�.";
	else
		cout << "Ʋ�Ƚ��ϴ�. " + elvis + "�Դϴ�. " << endl;

	return 0;
}