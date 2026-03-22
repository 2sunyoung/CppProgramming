// Title : 삼각형 면적 계산 프로그램
// Author : Lee sunyoung
// Data : 26.3.16

#include <iostream>
using namespace std;
class Triangle {
public:
	double s;
	double h;
	double getArea();
};
double Triangle::getArea() {
	return s * h * 0.5;
}
int main() {
	Triangle t;
	t.s = 3.0;
	t.h = 5.0;
	cout << "삼각형의 면적은 " << t.getArea();
	return 0;
}
