# Title : 구의 부피와 표면적 계산 프로그램
# Author : Lee sunyoung
# Data : 26.3.16

#include <iostream>
using namespace std;
class Sphere {
public:
	double r;
	double getVolume();
	double getArea();
};
double Sphere::getVolume() {
	return (4.0 / 3.0) * 3.14 * r * r * r;
}
double Sphere::getArea() {
	return 4 * 3.14 * r * r;
}
int main() {
	Sphere s;
	s.r = 6.3;
	cout << "구의 부피는 " << s.getVolume() << endl;
	cout << "구의 표면적은 " << s.getArea();
	return 0;
}
