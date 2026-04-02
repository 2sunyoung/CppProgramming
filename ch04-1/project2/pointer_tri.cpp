// Title : 객체 포인터를 이용한 삼각형 면적 계산 프로그램
// Author : Lee sunyoung
// Data : 26.4.2

#include <iostream>
using namespace std;
class Triangle {
private:
	int width, height;
public:
	Triangle() : width(1), height(1) {}
	void setWidth(int w) {
		if (w <= 0)
			cout << "삼각형의 폭은 양수입니다" << endl;
		else width = w;
	}
	void setHeight(int h) {
		if (h <= 0)
			cout << "삼각형의 높이는 양수입니다" << endl;
		else height = h;
	}
	double getArea() {
		return width * height * 0.5;
	}
};
int main() {
	Triangle tri;
	Triangle* tp;
	tp = &tri;
	tp -> setWidth(3);
	tp -> setHeight(5);
	cout << "삼각형의 면적은 " << tp -> getArea() << endl;
	return 0;
}
