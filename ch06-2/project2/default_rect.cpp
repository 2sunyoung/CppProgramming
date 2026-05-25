// Title : 디폴트 매개변수를 이용한 사각형 정보 출력 프로그램
// Author : Lee sunyoung
// Data : 26.5.18

#include <iostream>
using namespace std;
class Rectangle {
	int width, height;
public:
	Rectangle(int w = 1, int h = 1) : width(w), height(h) {}
	void show() {
		cout << "사각형 폭은 " << width << " 높이는 " << height << endl;
	}
};
int main() {
	Rectangle rect0;
	rect0.show();
	Rectangle rect1(10);
	rect1.show();
	Rectangle rect2(10, 20);
	rect2.show();
	return 0;
}
