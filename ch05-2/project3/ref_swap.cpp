// Title : swap 프로그램 (참조에 의한 호출)
// Author : Lee sunyoung
// Data : 26.5.10

#include <iostream>
using namespace std;
void swap(int& rx, int& ry);
int main() {
	int x, y;

	cout << "정수x를 입력하시오: ";
	cin >> x;
	cout << "정수y를 입력하시오: ";
	cin >> y;

	cout << "swap함수 호출 전 x=" << x << ", y=" << y << endl;
	swap(x, y);
	cout << "swap함수 호출 후 x=" << x << ", y=" << y << endl;

	return 0;
}
void swap(int& rx, int& ry) {
	int tmp;
	tmp = rx;
	rx = ry;
	ry = tmp;
}
