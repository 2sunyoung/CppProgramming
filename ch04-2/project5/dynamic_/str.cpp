// Title : 객체 배열과 객체 포인터를 이용한 삼각형 면적 계산 프로그램
// Author : Lee sunyoung
// Data : 26.4.2

#include <iostream>
using namespace std;
class Triangle {
private:
	int width, height;
public:
	Triangle(int w, int h) : width(w), height(h) {}
	~Triangle() {}
	double getArea() { return width * height * 0.5; }
};
int main() {
	Triangle triArray[3] = { Triangle(2,2) , Triangle(4,4) , Triangle(6,6) };
	Triangle* tp = triArray;
	for (int i = 0; i < 3; i++) 
		cout << "삼각형" << i << "의 면적은 " << (triArray + i)->getArea() << endl;
	cout << endl;
	for (int i = 0; i < 3; i++)
		cout << "삼각형" << i << "의 면적은 " << (tp+i)->getArea() << endl;
	cout << endl;
	for (int i = 0; i < 3; i++)
		cout << "삼각형" << i << "의 면적은 " << tp[i].getArea() << endl;
	cout << endl;
	for (int i = 0; i < 3; i++) {
		cout << "삼각형" << i << "의 면적은 " << tp->getArea() << endl;
		tp++;
	}
	return 0;
}
