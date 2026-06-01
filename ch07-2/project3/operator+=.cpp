// Title : += 연산자함수를 만들어 복소수를 계산하는 프로그램
// Author : Lee sunyoung
// Date : 26.6.1

#include <iostream>
using namespace std;
class Complex {
	int real, img;
public:
	Complex(int r, int i) : real(r), img(i) {}
	void show();
	Complex& operator+=(Complex op2);
};
void Complex::show() {
	if (img < 0)
		cout << real << img << "j" << endl;

	else cout << real << "+" << img << "j" << endl;
}
Complex& Complex::operator+=(Complex op2) {
	this->real = this->real + op2.real;
	this->img = this->img + op2.img;
	return *this;
}
int main() {
	Complex a(3, 5), b(1, 1);
	a.show();
	b.show() ;
	b += a;
	a.show();
	b.show();
	return 0;
}
