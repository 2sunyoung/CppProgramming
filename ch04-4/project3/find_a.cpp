// Title : 문자 'a'의 개수를 구하는 프로그램
// Author : Lee sunyoung
// Data : 26.4.16

#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int cnt=0;
	cout << "문자열 입력: ";
	getline(cin, s, '\n');
	for (int i = 0; i < s.length(); i++) {
		if (s.at(i) == 'a') 
			cnt++;
	}
	cout << "문자 a는 " << cnt << "개 있습니다.";
	return 0;
}
