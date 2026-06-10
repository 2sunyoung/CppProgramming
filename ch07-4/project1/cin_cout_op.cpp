// title: cin과 cout 연산자함수 만들기
// author: Lee sunyoung
// date: 26.6.10

#include <iostream>
using namespace std;
class Complex;
istream& operator>> (istream& op1, Complex& op2);
ostream& operator<< (ostream& op1, Complex& op2);
class Complex {
	int real, img;
public:
	Complex(int r = 0, int i = 0) :real(r), img(i) {}
	friend istream& operator>> (istream& op1, Complex& op2);
	friend ostream& operator<< (ostream& op1, Complex& op2);
};
int main() {
	Complex x, y;
	cin >> x >> y;
	cout << x << y;
	return 0;
}
istream& operator>> (istream& op1, Complex& op2) {
	cout << "실수부:";
	op1 >> op2.real;
	cout << "허수부:";
	op1 >> op2.img;
	return op1;
}
ostream& operator<< (ostream& op1, Complex& op2) {
	if (op2.img < 0) {
		op1 << op2.real << op2.img << "j" << endl;
	}
	else {
		op1 << op2.real << "+" << op2.img << "j" << endl;
	}
	return op1;
}
