// Title : 삼각형 정보 출력 프로그램 
// Author : Lee sunyoung
// Data : 26.3.25

#include <iostream>
using namespace std;
class Triangle {
private:
	double width, height;
public:
	Triangle();
	Triangle(double w, double h);
	~Triangle();
	double getArea();
	void setWidth(double w);
	double getWidth();
	void setHeight(double h);
	double getHeight();
};

Triangle::Triangle() {
	width = 1;
	height = 1;
	cout << "폭" << width << " 높이" << height << " 삼각형 생성" << endl;
}
Triangle::Triangle(double w, double h) {

}
Triangle::~Triangle() {
	cout << "폭" << width << " 높이" << height << " 삼각형 소멸" << endl;
}
double Triangle::getArea() {
	return width * height * 0.5;
}
void Triangle::setWidth(double w) {
	if (w <= 0)
		cout << "폭은 양수이어야 함!!" << endl;
	else width = w;
}
double Triangle::getWidth() {
	return width;
}
void Triangle::setHeight(double h) {
	if (h <= 0)
		cout << "높이는 양수이어야 함!!" << endl;
	else height = h;
}
double Triangle::getHeight() {
	return height;
}
int main() {
	Triangle tri(-10, -5);
	tri.setWidth(-3);
	tri.setHeight(-5);
	tri.setWidth(3);
	tri.setHeight(5);
	cout << "삼각형의 폭은 " << tri.getWidth() << endl;
		cout << "삼각형의 높이는 " << tri.getHeight() << endl;
		return 0;
}
