// Title : 복소수 덧셈 프로그램
// Author : Lee sunyoung
// Data : 26.5.28

#include <iostream>
using namespace std;
class Complex;
Complex ComplexAdd(Complex a, Complex b);
class Complex {
	int real, img;
public:
	Complex(int r=0, int i=0) : real(r), img(i) {
		cout << "복소수 " << real << "+" << img << "j 생성" << endl;
	}
	void show();
	friend Complex ComplexAdd(Complex a, Complex b);
};
void Complex::show() {
	if (img < 0)
		cout << real << img << "j" << endl;

	else cout << real << "+" << img << "j" << endl;
}
Complex ComplexAdd(Complex a, Complex b) {
	Complex res;
	res.real = a.real + b.real;
	res.img = a.img + b.img;
	return res;
}
int main() {
	Complex x(2, 3), y(-5, 10), sum;
	sum = ComplexAdd(x, y);
	cout << "두 복소수의 합은 ";
	sum.show();
	return 0;
}
