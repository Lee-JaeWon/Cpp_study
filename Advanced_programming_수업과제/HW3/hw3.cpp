#include <iostream>
using namespace std;

#include "hw3.h"

// 1번 문제
Box Box::operator +(Box& op2) {
    Box tmp;
    tmp.length = this->length + op2.length;
    tmp.width = this->width + op2.width;
    tmp.height = this->height + op2.height;

    return tmp;
}
// 2번 문제
bool Box::operator ==(Box& op2) {
    if (getVolume() == op2.getVolume()) {
        return true;
    }
    else return false;
}

// 3번 문제
void printBox(Box& box) { // 외부 함수
    cout << "Box Length: " << box.length << endl;
    cout << "Box Width: " << box.width << endl;
    cout << "Box Height: " << box.height << endl;
    cout << "Box Volume: " << box.getVolume() << endl;
}

