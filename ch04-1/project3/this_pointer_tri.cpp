// Title : this 포인터를 이용한 삼각형 면적 계산 프로그램
// Author : Lee sunyoung
// Data : 26.4.2

#include <iostream>
using namespace std;
class Triangle {
private:
	int width, height;
public:
	Triangle();
	Triangle(int width);
	Triangle(int width, int height);
	double getArea();
};
Triangle::Triangle() {
	this->width = 1;
	this->height = 1;
}
Triangle::Triangle(int width) {
	this->width = width;
	this->height = 1;
}
Triangle::Triangle(int width, int height) {
	this->width = width;
	this->height = height;
}
double Triangle::getArea() { 
	return this->width * this->height * 0.5;
}
int main() {
	Triangle tri1; 
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
		Triangle tri2(10);
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
		Triangle tri3(10, 2); 
	cout << "삼각형의 면적은 " << tri3.getArea() << endl;
		return 0;
}
