//����_������_++_�ۼ�, ���� ������
//�ӵ� ��� ����
#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power& operator++(); //���� ������
	const Power operator++(int dummy); //���� ������
};

void Power::show() {
	cout << "Kick=" << kick << ',' << "punch=" << punch << endl;
}
Power& Power::operator++() { //���� �����ڴ� ���� �� �Ҵ�
	++kick;
	++punch;
	return *this;
}
const Power Power::operator++(int x) { //���� �����ڴ� �Ҵ� �� ����
	Power p = *this;
	kick++;
	punch++;

	return p;
}

int main() {

	Power a(3, 5), b;
	a.show();
	b.show();

	b = ++a;
	a.show();
	b.show();

	b = a++;
	a.show();
	b.show(); // ��� Ȯ�ν� �Ҵ��� �켱�̱⿡ ������ �ȵȰ��� Ȯ�� ������

}