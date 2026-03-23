// Title : 전역 객체로 생성하는 구의 부피 계산 프로그램 (생성과 소멸 메시지 출력)
// Author : Lee sunyoung
// Data : 26.3.23

#include <iostream>
using namespace std;
class Sphere {
public:
	double r;
	Sphere();
	Sphere(double a);
	~Sphere();
	double getVolume();
};
Sphere::Sphere() : Sphere(1) {}
Sphere::Sphere(double a) : r(a) {
	cout << "반지름" << r << "인 구 생성" << endl;
}
Sphere::~Sphere() {
	cout << "반지름" << r << "인 구 소멸" << endl;
}
double Sphere::getVolume() {
	return (4.0) / (3.0) * 3.14 * r * r * r;
}
Sphere sph1(10);
Sphere sph2(20);
int main() {
	cout << "구의 부피는 " << sph1.getVolume() << endl;
	cout << "구의 부피는 " << sph2.getVolume() << endl;
	return 0;
}
