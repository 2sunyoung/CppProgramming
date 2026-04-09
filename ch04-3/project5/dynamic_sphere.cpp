// Title : 객체 배열을 동적으로 생성하여 구의 반지름과 부피를 출력하는 프로그램
// Author : Lee sunyoung
// Data : 26.4.9

#include <iostream>
using namespace std;
class Sphere {
private:
	int radius;
public:
	int setRadius(int r);
	double getVolume();
};
int Sphere::setRadius(int r) {
	if (r < 0) {
		cout << "반지름이 음수로 입력되었습니다" << endl;
	}
	else return radius = r;
}
double Sphere::getVolume() {
	return 3.14 * radius * radius * radius * 4 / 3;
}
int main() {
	int n;
	int r;
	cout << "생성하고자 하는 구의 개수: ";
	cin >> n;

	Sphere* p = new Sphere[n];
	for (int i = 0; i < n; i++) {
		cout << "구" << i + 1 << "의 반지름: ";
		cin >> r;
		p[i].setRadius(r);
	}
	for (int i = 0; i < n; i++) {
		cout << "구" << i + 1 << "의 부피 " << p[i].getVolume() << endl;
	}

	delete[]p;
	return 0;
}
