// Title : c = a * 2 + 2 * b를 수행하는 연산자 함수 만들기
// Author : Lee sunyoung
// Date : 26.6.9

#include <iostream>
using namespace std;
class Power;
Power operator* (int x, Power op);
class Power {
	int kick, punch;
public:
	Power() :Power(0, 0) {}
	Power(int k, int p) :kick(k), punch(p) {}
	void show() {
		cout << "kick=" << kick << ", punch=" << punch << endl;
	}
	Power& operator* (int x) { 
		this->kick *= x;
		this->punch *= x;
		return *this;
	}
	Power& operator+ (Power op) { 
		this->kick += op.kick;
		this->punch += op.punch;
		return *this;
	}
	friend Power operator* (int x, Power op);
};
int main() {
	Power a(1, 1), b(2, 2), c;
	c.show();
	c = a * 2 + 2 * b; 
	c.show();
	return 0;
}
Power operator* (int x, Power op) {
	Power tmp;
	tmp.kick = x * op.kick;
	tmp.punch = x * op.punch;
	return tmp;
}
