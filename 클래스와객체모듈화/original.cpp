//헤더파일과 cpp파일로 분리하기 //기존의 하나의 cpp
//사칙 연산
#include <iostream>
using namespace std;

class processer {
private:
	int op1, op2;
public:
	processer(int, int);
	void process(int*, int*, int*, double*); //합 차 곱 제
};

processer::processer(int a, int b) {
	op1 = a; op2 = b;
}

void processer::process(int* p, int* m, int* multi, double* div) {
	*p = op1 + op2;
	*m = op1 - op2;
	*multi = op1 * op2;
	*div = (double)op1 / (double)op2;
} //반환할 값이 여러개인 관계로 반환하지 않고 포인터 사용

class Calculator {
public:
	void run();
};

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

int main() {
	Calculator calc; //객체 생성
	calc.run(); //계산기 시작
}