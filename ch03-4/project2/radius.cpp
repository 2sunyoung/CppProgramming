// Title : 원의 반지름 출력 프로그램
// Author : Lee sunyoung
// Data : 26.3.25

#include <iostream>
using namespace std;
class Circle {
private:
	int radius;
public:
	Circle();
	void setRadius(int r);
	int getRadius();
};
Circle::Circle() { radius = 1; }
void Circle::setRadius(int r) {
	if (r <= 0)
		cout << "반지름은 양수이어야 함!!";
	else radius = r;
}
int Circle::getRadius() {
	return radius;
}
int main() {
	Circle waffle;
	waffle.setRadius(5);
	cout << "원의 반지름은 " << waffle.getRadius() << endl;
	return 0;
}
