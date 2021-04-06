#ifndef HW3_H
#define HW3_H

class Box; // forward reference를 막기 위한 선언문
void printBox(Box& box); // printBox() 함수 선언

class Box {
    double length, width, height;
    bool isEmpty;
public:
    Box(double w, double l, double h) : length(w), width(l), height(h) {
        isEmpty = true;
    }
    Box() : length(0), width(0), height(0) {
        isEmpty = true;
    }
    double getVolume() {
        return length * width * height;
    }

    // 1번 문제
    Box operator +(Box& op2);
    // 2번 문제
    bool operator ==(Box& op2);
    // 3번 문제
    friend void printBox(Box& box); // 프렌드 함수 선언
};

#endif // HW3_H
