// Title : 객체와 정수끼리 빼는 연산자함수를 만들어 복소수를 계산하는 프로그램
// Author : Lee sunyoung
// Date : 26.6.1

#include <iostream>
using namespace std;
class Complex {
	int real, img;
public:
	Complex(int r=0, int i=0) : real(r), img(i) {}
	void show();
	Complex operator-(int op2);
};
void Complex::show() {
	if (img < 0)
		cout << real << img << "j" << endl;

	else cout << real << "+" << img << "j" << endl;
}
Complex Complex::operator-(int op2) {
	Complex res;
	res.real = this->real - op2;
	res.img = this->img - op2;
	return res;
}
int main() {
	Complex a(3, 5), b;
	a.show();
	b.show();
	b = a - 2; 
	a.show();
	b.show();
	return 0;
}
