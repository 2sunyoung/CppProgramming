// Title : 객체 배열을 동적으로 생성하여 삼각형의 면적을 출력하는 프로그램
// Author : Lee sunyoung
// Data : 26.4.9

#include <iostream>
using namespace std;
class Triangle {
private:
	int width, height;
public:
	Triangle(int w, int h);
	~Triangle();
	double getArea() { return 0.5 * width * height; }
};
Triangle::Triangle(int w, int h): width(w), height(h) {
	cout << "밑변" << width << "높이" << height << "인 삼각형 생성" << endl;
}
Triangle::~Triangle() {
	cout << "밑변" << width << "높이" << height << "인 삼각형 소멸" << endl;
}
int main() {
	Triangle* p = new Triangle[3]{Triangle(1,1), Triangle(2,2), Triangle(4,4)};
	for (int i = 0; i < 3; i++) {
		cout << "삼각형의 면적은 " << p[i].getArea() << endl;
	}
	delete []p;
	return 0;
}
