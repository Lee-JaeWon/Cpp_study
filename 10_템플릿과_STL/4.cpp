// Generic Class
#include <iostream>
using namespace std;

// 선언부
template <class T>
class MyStack {
private:
	int tos; // top of stack
	T data[100];
public:
	MyStack();
	void Push(T element);
	T pop();
};


// 구현부
template <class T>
MyStack<T>::MyStack() {
	tos = -1;
}

template <class T>
void MyStack<T>::Push(T element) {
	if (tos == 99) {
		cout << "stack full" << endl;
		return;
	}
	tos++;
	data[tos] = element;
}

template <class T>
T MyStack<T>::pop() {
	T retData;
	if (tos == -1) {
		cout << "stack empty" << endl;
		return 0;
	}
	retData = data[tos--];
	return retData;
}

int main() {

	MyStack<int> iStack;
	iStack.Push(3);
	cout << iStack.pop() << endl;

	MyStack<double> dStack;
	dStack.Push(3.5);
	cout << dStack.pop() << endl;

	MyStack<char>* p = new MyStack<char>;
	p->Push('a');
	cout << p->pop() << endl;
	delete p;

}