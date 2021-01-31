// 실습 문제 4_13
// Histogram Class
#include <iostream>
#include <string>
#include <locale>
using namespace std;

class Histo_Change {
	string c_lyrics;
	int index = 0;
	int cnt = 0;
	int temp = 0;
public:
	Histo_Change();
	Histo_Change(string);
	void atoA();
	void Histo();
};

Histo_Change::Histo_Change() {
	this->c_lyrics = "none";
}
Histo_Change::Histo_Change(string c_lyrics) {
	this->c_lyrics = c_lyrics;
}
void Histo_Change::atoA() { //대문자 변환 및 알파벳 수 <locale>

	int n = 0;
	for (int i = 0; i < c_lyrics.length(); i++) {
		if (isalpha(c_lyrics[i])) n++;
	}
	cout << "총 알파벳 수 ";
	cout << n << endl << endl;

	int i;
	for (i = 0; i < c_lyrics.length(); i++) c_lyrics[i] = toupper(c_lyrics[i]);

}
void Histo_Change::Histo() {
	for (char c = 65; c < 91; c++) { //ASCII Code
		while (true) {
			index = c_lyrics.find(c, temp);
			temp = index + 1; // 문자열 find 인덱스 수정 // 검색 실패시 temp도 초기화 -1 + 1
			if (index == -1) break;
			cnt++;
		}
		cout << " " << c << " (" << cnt << ") " << ": ";

		for (int i = 0; i < cnt; i++)
			cout << '*';
		cout << endl;
		cnt = 0; // 카운트 초기화
	}
}

class Histogram {
	string lyrics;
public:
	Histogram();
	Histogram(string);
	void put(string);
	void putc(char);
	void print(void);
};
Histogram::Histogram() {
	this->lyrics = "none";
}
Histogram::Histogram(string lyrics) {
	this->lyrics = lyrics;
}
void Histogram::put(string lyrics) {
	this->lyrics += lyrics;
}
void Histogram::putc(char one_word) {
	this->lyrics += one_word;
}
void Histogram::print(void) {

	cout << lyrics << endl << endl;

	Histo_Change Change(lyrics);
	Change.atoA();
	Change.Histo();
}

int main() {

	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}