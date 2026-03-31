// Title : 자동 인라인 함수를 이용한 삼각형 면적 계산 프로그램
// Author : Lee sunyoung
// Data : 26.3.30

#include <iostream>
using namespace std;
class Triangle {
private:
	int width, height;
public:
	Triangle() : width(1), height(1) {
		cout << "폭" << width << ",높이" << height << "인 삼각형 생성" << endl;
	}
	~Triangle() {
		cout << "폭" << width << ",높이" << height << "인 삼각형 소멸" << endl;
	}
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
	tri.setWidth(3);
	tri.setHeight(5);
	cout << "삼각형의 면적은 " << tri.getArea() << endl;
	return 0;
}
