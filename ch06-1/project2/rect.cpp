// Title : 각기 다른 매개변수를 가지는 big 함수 3개 만들기
// Author : Lee sunyoung
// Data : 26.5.18

#include <iostream>
using namespace std;
class Rectangle {
	int width, height;
public:
	Rectangle() : Rectangle(1, 1) {
		cout << "사각형 폭은 " << w << " 높이는 " << h << endl;
	}
	Rectangle(int w) :width(w), height(1) {

	}
	Rectangle(int w, int h);
	void show();
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
