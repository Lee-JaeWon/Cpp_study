//Class 구현부
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "hw2.h"

pointdist::pointdist() : pointdist(0, 0, 0) {}
pointdist::pointdist(const int Length, const int width, const int dot_num) {
    this->Length = Length; this->width = width; this->dot_num = dot_num;

    p = new KPOINT[this->dot_num];
    Line = new double[this->dot_num * (this->dot_num + 1) / 2]; // 중복을 제외한 가능한 선분의 개수 = 점*(점 + 1) / 2
    // 중복되는 길이는 반복문에서 제거.

    MAX_P_a.x = 0; MAX_P_a.y = 0;
    MAX_P_b.x = 0; MAX_P_b.y = 0;
    MIN_P_a.x = 0; MIN_P_a.y = 0;
    MIN_P_b.x = 0; MIN_P_b.y = 0;
    MAX_D = 0; MIN_D = 0;
}
pointdist::~pointdist() {
    delete[] p;
    delete[] Line;
}
void pointdist::Random_dot() {
    srand((unsigned int)time(0));

    int temp;

    // 무작위의 x, y 추출
    for (int i = 0; i < this->dot_num; i++) {
        temp = rand() % (this->Length - 0 + 1); //(end - start + 1) + start
        p[i].x = temp;
    }
    for (int i = 0; i < this->dot_num; i++) {
        temp = rand() % (this->width - 0 + 1); //(end - start + 1) + start
        p[i].y = temp;
    }

    //Display
    cout << "<Random x,y Coordinates>" << endl;
    for (int i = 0; i < this->dot_num; i++)
        cout << i << " = " << p[i].x << ", " << p[i].y << endl;
    cout << endl;

}
void pointdist::dist_line() {

    int n = 0;
    double MAX_buf, MIN_buf;

    for (int i = 0; i < dot_num; i++) {
        for (int j = i; j < dot_num; j++) {
            Line[n] = sqrt(pow(p[i].x - p[j].x, 2) + pow(p[i].y - p[j].y, 2));

            if (n == 0) { //초기화
                MAX_buf = Line[0];
                MIN_buf = sqrt(pow(this->Length, 2) + pow(this->width, 2)); //범위의 최댓값으로 초기화
            }
            if (MAX_buf < Line[n]) {
                MAX_buf = Line[n];
                MAX_P_a.x = p[i].x; MAX_P_b.x = p[j].x;
                MAX_P_a.y = p[i].y; MAX_P_b.y = p[j].y;
                MAX_D = Line[n];
            }
            if (Line[n] < MIN_buf && Line[n] > 0) {//0은 제외
                MIN_buf = Line[n];
                MIN_P_a.x = p[i].x; MIN_P_b.x = p[j].x;
                MIN_P_a.y = p[i].y; MIN_P_b.y = p[j].y;
                MIN_D = Line[n];
            }
            n++;
        }
    }

    //Display
    cout << "<All line distance>" << endl;
    for (int i = 0; i < n; i++) {
        cout << i << ": " << Line[i] << endl;
    }
    cout << endl;
}
