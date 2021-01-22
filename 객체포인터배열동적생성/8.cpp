// �����ձ� ����
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
	cout << "�������� �̸��� �Է��ϼ���. ��ĭ ���� : ";
	cin >> name;

	return name;
}
void Player::setNum(int num) {
	this->member = num;
}

class WordGame {
	string one = "�ƹ���";
	string two = "���ű�";
	string thr = "����";
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

	if (a.at(j - 2) == b.at(0) && a.at(j - 1) == b.at(1)) { //�ѱ��� 2����Ʈ
		return 1;
	}
	else return 0;
}
void WordGame::game() {

	cout << "���� �ձ� ������ �����մϴ�." << endl;

	//��� ���� �Է� �� ����
	cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�?" << endl << "�ο� : ";

	int num;
	cin >> num; //�ο� �Է�
	cout << endl;
	Player member(num);
	string* name = new string[num];
	for (int i = 0; i < num; i++) {
		name[i] = member.CreateMember();
	}
	for (int i = 0; i < num; i++) cout << name[i] << endl;

	string r;
	WordGame game;
	r = game.Random(); //���� �ܾ� ����
	cout << endl << "�����ϴ� �ܾ�� " << r << " �Դϴ�." << endl;

	string a, b;
	int i = 0;
	a = r; //ó�� ���� �ܾ� ��

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
			cout << endl << "�����ձ� ����!!" << endl;
			break;
		}
	}
}

int main() {

	//���� ����
	WordGame g;
	g.game();
}