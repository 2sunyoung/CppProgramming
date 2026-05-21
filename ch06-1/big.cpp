// Title : 각기 다른 매개변수를 가지는 big 함수 3개 만들기
// Author : Lee sunyoung
// Data : 26.5.18

#include <iostream>
#include <string>
using namespace std;
int big(int a, int b);
double big(double a, double b);
string big(string a, string b);
int main() {
	int x = big(10, 20);
	cout << "큰 정수값은 " << x << endl;
	double y = big(3.14, 1.05);
	cout << "큰 실수값은 " << y << endl;
	string z = big("hello", "world");
	cout << "사전에서 뒤에 나오는 단어는 " << z << endl;
	return 0;
}
int big(int a, int b) {
	return (a > b ? a : b);
} 
double big(double a, double b) {
	return (a > b ? a : b);
}
string big(string a, string b) {
	return (a > b ? a : b);
}
