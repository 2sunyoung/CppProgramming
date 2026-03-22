// Title : 사각형 정보 출력 프로그램
// Author : Lee sunyoung
// Data : 26.3.19

#include <iostream>
using namespace std;
class Rectangle {
public:
	int x, y;
	int x2, y2;
	int width, height;

	Rectangle();
	Rectangle(int a, int b);
	Rectangle(int a, int b, int w, int h);
	
	int getArea() { return width * height; }
	int getPerimeter() { return 2 * (width + height); }
	void getXY();
	bool isSquare();
};
Rectangle::Rectangle() : Rectangle(1, 1, 1, 1) {}
Rectangle::Rectangle(int a, int b) : Rectangle(a, b, 1, 1) {}
Rectangle::Rectangle(int a, int b, int w, int h) : x(a), y(b), width(w), height(h) { getXY(); }

void Rectangle::getXY() {
	x2 = x + width;
	y2 = y - height;
}
bool Rectangle::isSquare() {
	if (width == height) return true;
	else return false;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5); 
	Rectangle rect3(3, 5, 2, 4);
	
	cout << "rect1의 면적은 " << rect1.getArea() << endl;
	cout << "rect2의 둘레길이는 " << rect2.getPerimeter() << endl;
	cout << "rect3의 우측하단의 좌표는 (" << rect3.x2 << "," << rect3.y2 << ")" << endl;
	return 0;
}
