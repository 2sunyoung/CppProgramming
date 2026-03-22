// Title : 문자열을 알파벳단위로 분리하는 프로그램
// Author : Lee sunyoung
// Data : 26.3.12

#include <iostream>
using namespace std;
int main(void) {
	char text[100];

	cout << "빈칸 없이 문자열을 입력하세요>>";
	cin >> text;

	char* p = text;

	while (*p != '\0') {
		cout << *p << ' ';
		p++;
	}
	return 0;
}
