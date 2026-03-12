# Title : 입력받은 개인정보를 출력하는 프로그램
# Author : Lee sunyoung
# Data : 26.3.12

#include <iostream>
using namespace std;
typedef struct {
	int snum;
	char name[99];
	char address[999];
} STUDENT;
int main(void) {
	STUDENT s;

	cout << "학번을 입력하십시오: ";
	cin >> s.snum;
	cout << "이름을 입력하십시오: ";
	cin >> s.name;
	cin.ignore();
	cout << "주소를 입력하십시오: ";
	cin.getline(s.address, sizeof(s.address), '\n');

	cout << "\n1.학번:" << s.snum << endl;
	cout << "2.이름:" << s.name << endl;
	cout << "3.주소:" << s.address;
	return 0;
}
