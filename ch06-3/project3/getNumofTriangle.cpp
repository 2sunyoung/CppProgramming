// Title : 생성된 삼각형의 개수를 출력하는 프로그램
// Author : Lee sunyoung
// Data : 26.5.20

#include <iostream>
using namespace std;
class Triangle {
	static int cnt;
public:
	Triangle() {
		cnt++;
	}
	~Triangle() {
		cnt = 0;
	}
	static int getNumofTriangle() { return cnt; }
};
int Triangle::cnt = 0;
int main() {
	Triangle* tri1 = new Triangle[5];
	cout << "생성된 삼각형의 개수 :" << Triangle::getNumofTriangle() << endl;
	delete[] tri1;
	Triangle tri2[15];
	cout << "생성된 삼각형의 개수 :" << Triangle::getNumofTriangle() << endl;
	return 0;
}
