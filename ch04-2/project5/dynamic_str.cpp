// Title : 동적 할당) 입력받은 문자열을 출력하는 프로그램
// Author : Lee sunyoung
// Data : 26.4.7

#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "저장할 문자열의 크기를 입력하세요: ";
	cin >> n;
	if (n <= 0) return -1;

	char* str = new char[n + 1];
	if (!str) {
		cout << "메모리를 할당할 수 없습니다.";
		return -1;
	}

	cin.ignore();
	cout << "문자열을 입력하시오: ";
	cin.getline(str,n+1);

	cout << "입력한 문자열은 " << str << "입니다." << endl;

	delete[] str;
	return 0;
}
