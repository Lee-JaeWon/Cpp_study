// 끝말잇기 게임
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player {
	int member;
public:
	Player();
	Player(int);
	string CreateMember();
	void setNum(int);
};

Player::Player() {
	this->member = 2;
}
Player::Player(int m) {
	this->member = m;
}
inline string Player::CreateMember() {

	string name;
	cout << "참가자의 이름을 입력하세요. 빈칸 없이 : ";
	cin >> name;

	return name;
}
void Player::setNum(int num) {
	this->member = num;
}

class WordGame {
	string one = "아버지";
	string two = "갈매기";
	string thr = "폭포";
	string comp_a, comp_b, comp_c;
public:
	WordGame();
	string Random();
	int compare_word(string, string);
	void game();
};

WordGame::WordGame() {}
string WordGame::Random() {

	srand((unsigned int)time(0));
	int temp;
	int start = 1;
	int end = 3;

	temp = rand() % (end - start + 1) + start;

	if (temp == 1) return one;
	if (temp == 2) return two;
	if (temp == 3) return thr;
}
int WordGame::compare_word(string a, string b) {
	int j = a.size();

	if (a.at(j - 2) == b.at(0) && a.at(j - 1) == b.at(1)) { //한글은 2바이트
		return 1;
	}
	else return 0;
}
void WordGame::game() {

	cout << "끝말 잇기 게임을 시작합니다." << endl;

	//멤버 정보 입력 및 저장
	cout << "게임에 참가하는 인원은 몇명입니까?" << endl << "인원 : ";

	int num;
	cin >> num; //인원 입력
	cout << endl;
	Player member(num);
	string* name = new string[num];
	for (int i = 0; i < num; i++) {
		name[i] = member.CreateMember();
	}
	for (int i = 0; i < num; i++) cout << name[i] << endl;

	string r;
	WordGame game;
	r = game.Random(); //랜덤 단어 제시
	cout << endl << "시작하는 단어는 " << r << " 입니다." << endl;

	string a, b;
	int i = 0;
	a = r; //처음 제시 단어 비교

	while (true) {

		if (i == num) i = 0;
		cout << name[i] << ">> ";
		cin >> b;

		int res = game.compare_word(a, b);
		if (res == 1) {
			a = b;
			i++;
			continue;
		}
		else if (res == 0) {
			cout << endl << "끝말잇기 실패!!" << endl;
			break;
		}
	}
}

int main() {

	//게임 진행
	WordGame g;
	g.game();
}