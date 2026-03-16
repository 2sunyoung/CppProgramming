# Title : 사각형 정보 출력 프로그램
# Author : Lee sunyoung
# Data : 26.3.16

#include <iostream>
using namespace std;
class Rectangle {
public:
	int width;
	int height;
	int x ,x2;
	int y, y2;
	int getArea();
	int getPerimeter();
	void getXY();
};
int Rectangle::getArea() {
	return width * height;
}
int Rectangle::getPerimeter() {
	return 2 * (width + height);
}
void Rectangle::getXY() {
	x2 = x + width;
	y2 = y - height;
}
int main() {
	Rectangle r;
	r.x = 1;
	r.y = 2;
	r.width = 3;
	r.height = 4;

	cout << "사각형의 면적은 " << r.getArea() << endl;
	cout << "사각형의 둘레길이는 " << r.getPerimeter() << endl;

	r.getXY();
	cout << "사각형의 우측하단의 좌표는 (" << r.x2 << "," << r.y2 << ")";
	return 0;
}
