// Title : 동적 할당을 이용한 최대값 계산 프로그램
// Author : Lee sunyoung
// Data : 26.4.7

#include <iostream>
using namespace std;
int main() {
	int n;
	double sum = 0;

	cout << "입력할 실수의 개수를 입력하세요: ";
	cin >> n;
	if (n <= 0) return -1;
	cout << n << "개의 실수를 입력 하시오." << endl;

	double* p = new double[n];
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return -1;
	}

	for (int i = 0; i < n; i++) 
		cin >> p[i];

	double max = p[0];
	for (int i = 1; i < n; i++) {
		if (max < p[i]) 
			max = p[i];
	}
	cout << "최대값은 " << max << "입니다." << endl;

	delete[] p;
	return 0;
}
