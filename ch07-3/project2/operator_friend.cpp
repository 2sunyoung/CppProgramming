// Title : ++, -- 연산자함수를 만들어 복소수를 계산하는 프로그램 (프렌드함수로 구현)
// Author : Lee sunyoung
// Date : 26.6.9

#include <iostream>
using namespace std;
class Complex;
Complex& operator++(Complex& op1);
Complex operator--(Complex& op1, int x);
class Complex {
	int real, img;
public:
	Complex(int r=0, int i=0): real(r), img(i) {
		if (img < 0)
			cout << "복소수 " << real << img << "j 생성" << endl;
		else
			cout << "복소수 " << real << " - " << img << "j 생성" << endl;
	}
	void show() {
		if (img < 0)
			cout << real << img << "j" << endl;
		else
			cout << real << " - " << img << "j" << endl;
	}
	friend Complex& operator++(Complex& op1);
	friend Complex operator--(Complex& op1, int x);
};
int main() {
	Complex x(2, -3);
	++x;
	cout << "증가결과 ";
	x.show();
	x--;
	cout << "감소결과 ";
	x.show();
	return 0;
}
Complex& operator++(Complex& op1) {
	op1.real++;
	op1.img++;
	return op1;
}
Complex operator--(Complex& op1,int x) {
	Complex tmp = op1;
	op1.real--;
	op1.img--;
	return tmp;
}
