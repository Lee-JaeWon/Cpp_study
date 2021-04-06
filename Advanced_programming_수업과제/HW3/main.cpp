#include <iostream>
using namespace std;

#include "hw3.h"

int main() {
    Box a(10, 10, 10), b(20, 20, 20), c;
    // 1번 문제
    c = a + b;
    // 2번 문제
    cout << (a == b) << endl;
    // 3번 문제
    printBox(c);
}
