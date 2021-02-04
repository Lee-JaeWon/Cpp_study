// 실습 문제 4_14
// Gambling Game
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player {
	string player;
public:
	Player();
	string Create_Member(int);
};

Player::Player() {
	player = "none";
}
string Player::Create_Member(int num) {

	if (num == 0) {
		cout << "첫번째 선수 이름 >> ";
		getline(cin, player, '\n');

		return player;
	}
	else if (num == 1) {
		cout << "두번째 선수 이름 >> ";
		getline(cin, player, '\n');

		return player;
	}
}

class Gambling_Game {
	int num;
	int temp;
public:
	Gambling_Game();
	void Intro_Game();
	int Rannum();
	void Play_Game();
};

Gambling_Game::Gambling_Game() {
	num = 3; temp = 3;
}
void Gambling_Game::Intro_Game() {
	cout << "***** " << "갬블링 게임을 시작합니다." << " *****" << endl;
}
int Gambling_Game::Rannum() {

	temp = rand();

	return temp % 3;

}
void  Gambling_Game::Play_Game() {

	srand((unsigned int)time(NULL));

	Player member;

	string* name = new string[2];
	for (int i = 0; i < 2; i++)
		name[i] = member.Create_Member(i);

	Gambling_Game g;
	int* gamble_num = new int[3];

	while (true) {

		char ent;

		for (int i = 0; i < 2;) {
			cout << name[i] << ":" << "<Enter>";
			cin.get(ent);
			cout << "\t\t";

			if (ent == '\n') {
				for (int j = 0; j < num; j++) {
					gamble_num[j] = g.Rannum();
					cout << gamble_num[j] << '\t';
				}

				if ((gamble_num[0] == gamble_num[1]) && (gamble_num[1] == gamble_num[2])) {
					cout << name[i] << "님 승리!!";
					cout << endl;
					break;
				}
				else {
					cout << "아쉽군요!" << endl;
					if (i == 0)
						i++;
					else
						i = 0;
					continue;
				}
			}
		}
		break;
	}
	cout << endl;

	delete[] name;
	delete[] gamble_num;
}

int main() {

	Gambling_Game game;
	game.Intro_Game();
	game.Play_Game();

}