#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(int n) {
	cout << n << " ";
}

int main() {
	vector<int> v = { 1,2,3,4,5 };

	//각 원소에 대해 print함수 호출, 매개 변수 n에 각 원소 값 전달
	for_each(v.begin(), v.end(), print);
	cout << endl;
}