// Title : 문자열 swap 프로그램
// Author : Lee sunyoung
// Data : 26.5.6

#include <iostream>
#include <string>
using namespace std;
void SwapString(string* s1, string* s2);
int main() {
	string s1("hello");
	string s2("world");
	cout << "호출전 s1 : " << s1 << " s2 : " << s2 << endl;
	SwapString(&s1, &s2); 
	cout << "호출후 s1 : " << s1 << " s2 : " << s2 << endl;
}
void SwapString(string* s1, string* s2) {
	string tmp;
	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}
