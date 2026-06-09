// Title : Power 클래스에서 객체와 정수를 곱하는 연산자 함수 작성하기
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
	friend Power operator* (int x, Power op);
};
int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = 2 * a;
	a.show();
	b.show();
	return 0;
}
Power operator* (int x, Power op) {
	Power tmp;
	tmp.kick = x * op.kick;
	tmp.punch = x * op.punch;
	return tmp;
}
