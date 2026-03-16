# Title : 사각형 정보 계산 프로그램
# Author : Lee sunyoung
# Data : 26.3.16

#include <iostream>
using namespace std;
class Rectangle {
public:
	int width;
	int height;
	int x, x2;
	int y, y2;
	int getArea();
	int getPerimeter();
	void getXY();
	void getRectinfo();
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
void Rectangle::getRectinfo() {
	cout << "사각형의 좌측상단좌표(x,y): ";
	cin >> x >> y;
	cout << "사각형의 폭과 높이(width,height): ";
	cin >> width >> height;
}
int main() {
	Rectangle r;
	r.getRectinfo();

	cout << "사각형의 면적은 " << r.getArea() << endl;
	cout << "사각형의 둘레길이는 " << r.getPerimeter() << endl;

	r.getXY();
	cout << "사각형의 우측하단의 좌표는 (" << r.x2 << "," << r.y2 << ")";
	return 0;
}
