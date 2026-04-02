// Title : 객체 배열을 이용한 삼각형 면적 계산 프로그램
// Author : Lee sunyoung
// Data : 26.4.2

#include <iostream>
using namespace std;
class Triangle {
private:
	int width, height;
public:
	Triangle(int w, int h);
	~Triangle();
	double getArea();
};
Triangle::Triangle(int w, int h) : width(w), height(h) {
	cout << "밑변" << width << ",높이" << height << "인 삼각형 생성" << endl;
}
Triangle::~Triangle() {
	cout << "밑변" << width << ",높이" << height << "인 삼각형 소멸" << endl;
}
double Triangle::getArea() { 
	return width * height * 0.5;
}
int main() {
	Triangle triArray[3] = { Triangle(2,2) , Triangle(4,4) , Triangle(6,6) };
	for (int i = 0; i < 3; i++) {
		cout << "삼각형" << i << "의 면적은 " << triArray[i].getArea() << endl;
	}
	return 0;
}
