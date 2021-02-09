// Chapter 5, OpenChallenge
// 모스 부호 변환기, 참조에 의한 호출
// ASCII code로 구현
#include <iostream>
#include <string>
#include <locale>
using namespace std;

class Morse {
private:
	string alphabet[26];
	string digit[10];
	string slash, question, comma, period, plus, equal;
	string text;
public:
	Morse();
	void text_to_Morse(string, string&);
	void morse_to_text(string, string&);
};

Morse::Morse() {
	alphabet[0] = ".-"; //A
	alphabet[1] = "-..."; //B
	alphabet[2] = "-.-."; //C
	alphabet[3] = "-.."; //D
	alphabet[4] = "."; //E
	alphabet[5] = "..-."; //F
	alphabet[6] = "--."; //G
	alphabet[7] = "...."; //H
	alphabet[8] = ".."; //I
	alphabet[9] = ".---"; //J
	alphabet[10] = "-.-"; //K
	alphabet[11] = ".-.."; //L
	alphabet[12] = "--"; //M
	alphabet[13] = "-."; //N
	alphabet[14] = "---"; //O
	alphabet[15] = ".--."; //P
	alphabet[16] = "--.-"; //Q
	alphabet[17] = ".-."; //R
	alphabet[18] = "..."; //S
	alphabet[19] = "-"; //T
	alphabet[20] = "..-"; //U
	alphabet[21] = "...-"; //V
	alphabet[22] = ".--"; //W
	alphabet[23] = "-..-"; //X
	alphabet[24] = "-.--"; //Y
	alphabet[25] = "--.."; //Z

	digit[0] = "-----"; //0
	digit[1] = ".----"; //1
	digit[2] = "..---"; //2
	digit[3] = "...--"; //3
	digit[4] = "....-"; //4
	digit[5] = "....."; //5
	digit[6] = "-...."; //6
	digit[7] = "--..."; //7
	digit[8] = "----.."; //8
	digit[9] = "----."; //9

	slash = "-..-.";
	question = "..--..";
	comma = "--..--";
	period = ".-.-.-";
	plus = ".-.-.";
	equal = "-...-";
}
void Morse::text_to_Morse(string text, string& morse) {

	this->text = text;

	int num = text.length();

	for (int i = 0; i < num; i++) text[i] = toupper(text[i]);

	for (int i = 0; i < num; i++) {
		int tmp = text.at(i);

		if (tmp >= 65 && tmp <= 90) { //alphabet 구간
			tmp -= 65;

			morse += alphabet[tmp];
			morse += " / ";
		}
		else if (tmp == 32) {
			morse += "   / ";
		}
		else if (tmp >= 48 && tmp <= 57) { //숫자 구간
			tmp -= 48;

			morse += digit[tmp];
			morse += " / ";
		}
		else if (tmp == 47) { // '/'
			morse += slash;
			morse += " / ";
		}
		else if (tmp == 63) { // '?'
			morse += question;
			morse += " / ";
		}
		else if (tmp == 44) { // ','
			morse += comma;
			morse += " / ";
		}
		else if (tmp == 46) { // '.'
			morse += period;
			morse += " / ";
		}
		else if (tmp == 43) { // '+'
			morse += plus;
			morse += " / ";
		}
		else if (tmp == 61) { // '='
			morse += equal;
			morse += " / ";
		}
		else
			continue;
	}
}
void Morse::morse_to_text(string morse, string& text) {

	int num = morse.length();
	int j = 0;
	string s;
	char c;

	for (int i = 0; i < num; i++) {

		int tmp = morse.at(i);

		if (tmp == 47) { // '/' 발견

			if (j == 0) // 첫 시작 예외처리
				s = morse.substr(j, i - j - 1);
			else
				s = morse.substr(j + 2, i - j - 3);

			j = i;

			for (int k = 0; k < 26; k++) {

				if (alphabet[k] == s) {
					c = k + 65;
					text += c;
					break;
				}
				else if (digit[k] == s) {
					text += k + 48;
					break;
				}
				else if (slash == s) {
					text += '/';
					break;
				}
				else if (question == s) {
					text += '?';
					break;
				}
				else if (comma == s) {
					text += ',';
					break;
				}
				else if (period == s) {
					text += '.';
					break;
				}
				else if (plus == s) {
					text += '+';
					break;
				}
				else if (equal == s) {
					text += '=';
					break;
				}
				else if (s == "  ") {
					text += " ";
					break;
				}
				else {
					continue;
				}
			}
		}
		else continue;
	}

	// 대문자와 소문자 다시 원상 복구
	int t_num = text.length();
	char a, b;
	for (int i = 0; i < t_num; i++) text[i] = tolower(text[i]);

	int res = this->text.compare(text);
	if (res == 0)
		exit;

	for (int i = 0; i < t_num; i++) {

		a = this->text[i];
		b = text[i];

		if (a != b) text[i] = toupper(text[i]);
	}
}

int main() {

	string m_text;
	string m_morse = "";
	cout << "아래에 영문 텍스트를 입력하세요. 모스 부호로 바꿉니다." << endl;
	cout << "/    /" << " 는 공백입니다." << endl;
	getline(cin, m_text, '\n');

	Morse morse;
	morse.text_to_Morse(m_text, m_morse);
	cout << m_morse << endl << endl;

	m_text = "";
	cout << "모스 부호를 다시 영문 텍스트로 바꿉니다." << endl;
	morse.morse_to_text(m_morse, m_text);
	cout << m_text << endl;

}