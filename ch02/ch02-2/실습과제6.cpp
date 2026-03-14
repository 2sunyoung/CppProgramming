# Title : 단어의 개수를 세는 프로그램
# Author : Lee sunyoung
# Data : 26.3.12

#include <iostream>
using namespace std;
int main(void) {
	char text[999];

		while (true) {
		cout << "영문 텍스트를 입력하세요(빈칸 포함 가능)>>";
		cin.getline(text, sizeof(text), '\n');

		if (strcmp(text, "exit") == 0) break;

		int cnt = 0;
		for (int i = 0; text[i] != '\0'; i++) {
			if ((text[i] != ' ') && (text[i + 1] == ' ' || text[i + 1] == '\0')) {
				cnt++;
			}
		}
		cout << "단어의 개수는 " << cnt << "개이다." << endl;
	}
	return 0;
}
