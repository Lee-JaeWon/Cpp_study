#include <iostream>
using namespace std;

#include "Calculator.h"
#include "processer.h"

void Calculator::run() {
	cout << "�� ���� ���� �Է��ϼ���>> ";
	int a, b;
	cin >> a >> b; //���� �� �� �Է�
	processer calculate(a, b); //��ü ����

	int plus, minus, multi;
	double div;

	//process ����
	calculate.process(&plus, &minus, &multi, &div);

	//���
	cout << plus << endl; //���� ���
	cout << minus << endl; //���� ���
	cout << multi << endl; //�� ���
	cout << div << endl; //������ ���
}