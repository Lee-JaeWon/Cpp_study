#include "processer.h"

processer::processer(int a, int b) {
	op1 = a; op2 = b;
}

void processer::process(int* p, int* m, int* multi, double* div) {
	*p = op1 + op2;
	*m = op1 - op2;
	*multi = op1 * op2;
	*div = (double)op1 / (double)op2;
} //��ȯ�� ���� �������� ����� ��ȯ���� �ʰ� ������ ���