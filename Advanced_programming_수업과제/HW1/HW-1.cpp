#include <iostream>
#include <string>
using namespace std;

int main() {

    string oper;

    string tmp;
    char mid; //연산자
    int Lnum, Rnum; // 숫자 분할

    while (oper != "quit") { //"quit"입력시 종료
        cout << "? ";
        getline(cin, oper);

        int len = oper.size();

        int index = oper.find(' '); //첫번째 공백 기준으로 분류, 연산자 전
        if (index == -1) { //형식에 맞지 않는 경우
            if (oper == "quit") {
                break;
            }
            else {
                cout << "Error!!" << endl;
                continue;
            }
        }

        mid = oper[index + 1]; //연산자 추출
        tmp = oper.substr(0, index + 1);
        Lnum = stoi(tmp);

        tmp = oper.substr(index + 3, len - (index + 3)); //tmp 초기화
        Rnum = stoi(tmp);

        //연산자에 따른 5칙연산
        if (mid == '+') {
            cout << Lnum << " + " << Rnum << " = " << Lnum + Rnum << endl;
        }
        else if (mid == '-') {
            cout << Lnum << " - " << Rnum << " = " << Lnum - Rnum << endl;
        }
        else if (mid == '*') {
            cout << Lnum << " * " << Rnum << " = " << Lnum * Rnum << endl;
        }
        else if (mid == '/') {
            cout << Lnum << " / " << Rnum << " = " << Lnum / Rnum << endl;
        }
        else if (mid == '%') {
            cout << Lnum << " % " << Rnum << " = " << Lnum % Rnum << endl;
        }
    }
}
