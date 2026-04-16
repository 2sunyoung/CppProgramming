// Title : 입력받은 문자열을 이어주는 프로그램
// Author : Lee sunyoung
// Data : 26.4.16

#include <iostream>
#include <string>
using namespace std;
int main() {
	string s, ss;
	int num = 1;
	while (true) {
		cout << "문자열 입력: ";
		getline(cin, s, '\n');

		if (s == "quit") break;
		ss += '<' + to_string(num) + '>' + s;
		cout << "이어진 문자열: " << ss << endl;
		num++;
	}
	return 0;
}
