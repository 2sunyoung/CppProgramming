// Title : 참조 리턴을 활용하여 객체의 반지름을 구하는 프로그램
// Author : Lee sunyoung
// Data : 26.5.12

#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle(int r): radius(r) {}
	Circle& plus(int p) { 
		radius += p; 
		return *this;
	}
	Circle& minus(int m) {
		radius -= m;
		return *this;
	}
	int getRadius() { return radius; }
};
int main() {
	Circle a(5);
	a.plus(1).plus(2).plus(3).minus(3).minus(2).minus(1).minus(5);
	cout << "객체 a의 반지름은 " << a.getRadius();
	return 0;
}
