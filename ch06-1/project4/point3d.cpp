// Title : 다양한 생성자를 이용한 3차원 좌표 출력 프로그램
// Author : Lee sunyoung
// Data : 26.5.18

#include <iostream>
using namespace std;
class Point3D {
	int x, y, z;
public:
	Point3D() : Point3D(0, 0, 0) {}
	Point3D(int x) : Point3D(x, 0, 0) {}
	Point3D(int x, int y) : Point3D(x, y, 0) {}
	Point3D(int x, int y, int z) : x(x), y(y),z(z) {}
	void show() {
		cout << "3차원 점의 좌표는 (" << x << "," << y << "," << z << ")" << endl;
	}
};
int main() {
	Point3D p0;
	p0.show();
	Point3D p1(1);
	p1.show();
	Point3D p2(1, 2);
	p2.show();
	Point3D p3(1, 2, 3);
	p3.show();
	return 0;
}
