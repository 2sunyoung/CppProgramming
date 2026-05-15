// Title : 스택에서 pop한 값을 출력하는 프로그램
// Author : Lee sunyoung
// Data : 26.5.14

#include <iostream>
using namespace std;
class MyStack {
	int* p;
	int size = 0;
	int tos = 0;
public:
	MyStack(): MyStack(10) {}
	MyStack(int size) {
		this->size = size;
		p = new int[size];
	}
	MyStack(const MyStack& src) {
		this->size = src.size;
		this->tos = src.tos;
		this->p = new int[this->size];
		for (int i = 0;i < this->size;i++) {
			this->p[i] = src.p[i];
		}
	}
	~MyStack() {
		if(p) delete[] p;
	}
	bool push(int n) {
		if (size == tos)
			return false;
		else {
			p[tos++] = n;
			return true;
		}
	}
	bool pop(int& n) {
		if (tos == 0)
			return false;
		else {
			n = p[--tos];
			return true;
		}
	}
};
int main() {
	MyStack a(10);
	a.push(10); a.push(20);

	MyStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
	return 0;
}
