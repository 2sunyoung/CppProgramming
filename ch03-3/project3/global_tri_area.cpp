// Title : 전역 객체로 생성하는 삼각형 면적 계산 프로그램 (생성과 소멸 메시지 출력)
// Author : Lee sunyoung
// Data : 26.3.23

#include <iostream>
using namespace std;
class Triangle {
public:
	double s, h;
	Triangle();
	Triangle(double a, double b);
	~Triangle();
	double getArea();
};

Triangle::Triangle() : Triangle(1, 1) {}
Triangle::Triangle(double a, double b) : s(a), h(b) {
	cout << "밑변" << s << " 높이" << h << "인 삼각형 생성" << endl;
}
Triangle::~Triangle() {
	cout << "밑변" << s << " 높이" << h << "인 삼각형 소멸" << endl;
}

double Triangle::getArea() {
	return s * h * 0.5;
}

Triangle tri1(4, 8);
Triangle tri2(2, 2);

int main() {
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
	return 0; 
}
