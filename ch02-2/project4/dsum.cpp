# Title : 입력받은 실수들의 합을 출력하는 프로그램
# Author : Lee sunyoung
# Data : 26.3.12

#include <iostream>
using namespace std;
int main(void) {
	double a, sum=0;
  
	cout << "실수 5개를 입력하세요>>";
	for (int i = 0; i < 5; i++) {
		cin >> a;
		if (a > 0)
			sum += a;
	}
  
	cout << "양수 합은 " << sum << "입니다.";
	return 0;
}
