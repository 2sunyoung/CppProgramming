// Title : 사전에서 제일 뒤에 나오는 문자열을 구하는 프로그램
// Author : Lee sunyoung
// Data : 26.5.6

#include <iostream>
#include <string>
using namespace std;
string LastString(string* arr, int len);
int main() {
	string names[5];
	for (int i = 0; i < 5; i++) {
		cout << "이름 >> ";
		getline(cin, names[i], '\n');
	}
	string res = LastString(names, 5);
	cout << "사전에서 가장 뒤에 나오는 문자열은 " << res << endl;
}
string LastString(string* arr, int len) {
	string last = *arr;
	for (int i = 0; i < len; i++) {
		if (last < arr[i])
			last = arr[i];
	}
	return last;
}
