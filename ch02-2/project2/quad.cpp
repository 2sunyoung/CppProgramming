// Title : 이차식 연산 프로그램
// Author : Lee sunyoung
// Data : 26.3.12

#include <iostream>
using namespace std;
int main() {
	int x, y;
	cout << "정수 x를 입력하시오: ";
	cin >> x;
	
	y = (x * x) + (2 * x) - 5;

	cout << "x=" << x << " 일 때 y의 값은 " << y << "입니다." << endl;
  return 0;
}
