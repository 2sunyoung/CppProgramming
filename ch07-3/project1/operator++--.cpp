// Title : ++, -- 연산자함수를 만들어 복소수를 계산하는 프로그램
// Author : Lee sunyoung
// Date : 26.6.9

#include <iostream>
using namespace std;
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
	Complex& operator++() {
		this->real++;
		this->img++;
		return *this;
	}
	Complex operator--(int x) {
		Complex tmp = *this;
		this->real--;
		this->img--;
		return tmp;
	}
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
