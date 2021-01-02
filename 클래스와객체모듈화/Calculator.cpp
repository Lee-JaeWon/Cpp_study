#include <iostream>
using namespace std;

#include "Calculator.h"
#include "processer.h"

void Calculator::run() {
	cout << "두 개의 수를 입력하세요>> ";
	int a, b;
	cin >> a >> b; //정수 두 개 입력
	processer calculate(a, b); //객체 생성

	int plus, minus, multi;
	double div;

	//process 진행
	calculate.process(&plus, &minus, &multi, &div);

	//출력
	cout << plus << endl; //덧셈 계산
	cout << minus << endl; //뺄셈 계산
	cout << multi << endl; //곱 계산
	cout << div << endl; //나누기 계산
}