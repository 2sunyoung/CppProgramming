// Title : + 연산자함수를 만들어 복소수를 계산하는 프로그램
// Author : Lee sunyoung
// Date : 26.6.1

#include <iostream>
using namespace std;
class Complex {
	int real, img;
public:
	Complex(int r = 0, int i = 0):real(r), img(i) {}
	void show();
	Complex operator+ (Complex op2);
};
void Complex::show() {
	if (img < 0) cout << real << img << "j";
	else cout << real << "+" << img << "j";
}
Complex Complex::operator+ (Complex op2) {
	Complex res;
	res.real = this->real + op2.real;
	res.img = this->img + op2.img;
	return res;
}
int main() {
	Complex x(2, 3), y(-5, 10), sum;
	sum = x.operator+ (y);
	cout << "두 복소수의 합은 ";
	sum.show();
	return 0;
}
