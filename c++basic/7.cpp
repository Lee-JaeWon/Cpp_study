//간단한 가위바위보.
#include <iostream>
#include <string>
using namespace std;

void introGame();
int CompareResult(string, string);

int main()
{
	introGame();

	int res;
	do {
		string L;
		cout << "로미오 >> ";
		cin >> L;

		string J;
		cout << "줄리엣 >> ";
		cin >> J;

		res = CompareResult(L, J);

		if (res == 0)
			cout << "비겼습니다. 다시 진행합니다." << endl << endl;

	} while (res == 0);

	if (res == 1)
		cout << "로미오가 승리." << endl;
	if (res == 2)
		cout << "줄리엣이 승리." << endl;

	return 0;
}

void introGame()
{
	cout << "가위 바위 보 게임을 시작합니다. " << "가위, 바위, 보 중에서 입력하세요." << endl;
}

int CompareResult(string L, string J)
{
	if ((L == "가위" && J == "보")
		|| (L == "보" && J == "바위")
		|| (L == "바위" && J == "가위"))
		return 1;
	else if (L == J)
		return 0;
	else
		return 2;
}