// Title : 소문자 문자열을 대문자 문자열로 바꾸는 프로그램
// Author : Lee sunyoung
// Data : 26.5.12

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void Uppercase(string& s);
int main() {
	string s1("hello");
	cout << "변환전 문자열 " << s1 << endl;
	Uppercase(s1);
	cout << "변환후 문자열 " << s1 << endl;
	return 0;
}
void Uppercase(string& s) {
	for (int i = 0; i < s.length(); i++) 
		s[i] = toupper(s[i]);
}
