//������ϰ� cpp���Ϸ� �и��ϱ� //������ �ϳ��� cpp
//��Ģ ����
#include <iostream>
using namespace std;

class processer {
private:
	int op1, op2;
public:
	processer(int, int);
	void process(int*, int*, int*, double*); //�� �� �� ��
};

processer::processer(int a, int b) {
	op1 = a; op2 = b;
}

void processer::process(int* p, int* m, int* multi, double* div) {
	*p = op1 + op2;
	*m = op1 - op2;
	*multi = op1 * op2;
	*div = (double)op1 / (double)op2;
} //��ȯ�� ���� �������� ����� ��ȯ���� �ʰ� ������ ���

class Calculator {
public:
	void run();
};

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

int main() {
	Calculator calc; //��ü ����
	calc.run(); //���� ����
}