// Title : 두 문자열을 교환하는 프로그램
// Author : Lee sunyoung
// Data : 26.5.12

#include <iostream>
#include <string>
using namespace std;
void SwapString(string& a, string& b);
int main() {
	string s1("hello");
	string s2("world");
	cout << "교환전 문자열" << s1 << s2 << endl;
	SwapString(s1, s2);
	cout << "교환후 문자열" << s1 << s2 << endl;
	return 0;
}
void SwapString(string& a, string& b) {
	string tmp;
	tmp = a;
	a = b;
	b = tmp;
}
