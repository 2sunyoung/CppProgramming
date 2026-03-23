// Title : 삼각형 면적 계산 프로그램
// Author : Lee sunyoung
// Data : 26.3.19

#include <iostream>
using namespace std;
class Triangle {
	double s, h;
public:
	Triangle();
	Triangle(double a, double b);
	double getArea();
};
Triangle::Triangle() : Triangle(1, 1) {}
Triangle::Triangle(double a, double b) : s(a), h(b) {}

double Triangle::getArea() {
	return s * h * 0.5;
}

int main() {
	Triangle tri1;
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
	Triangle tri2(2, 4);
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
	return 0;
}
