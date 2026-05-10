// Title : 실수의 정수부와 소수부를 나누는 프로그램
// Author : Lee sunyoung
// Data : 26.5.10

#include <iostream>
using namespace std;
void get_parts(double a, int& ri, double& rd);
int main() {
	double a;
	int i;
	double d;

	cout << "실수를 입력하시오: ";
	cin >> a;

	get_parts(a, i, d);
	cout << "정수부: " << i << endl;
	cout << "소수부: " << d << endl;
	return 0;
}
void get_parts(double a, int& ri, double& rd) {
	ri = (int)a;
	rd = a - ri;
}
