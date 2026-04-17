// Title : 알파벳이 몇 개인지 계수하는 히스토그램 프로그램
// Author : Lee sunyoung
// Data : 26.4.16

#include <iostream>
#include <string>
using namespace std;
class Histogram {
	string str;
	int cnt = 0;
	int alpha_cnt[26] = { 0, };
public:
	Histogram(string s):str(s) {}
	void add(string s) { str += s; }
	void addc(char c) { str += c; }
	void draw();
	void upper_to_lower();
};
void Histogram::upper_to_lower() {
	for (int i = 0; i < str.length(); i++) {
		if ('A' <= str.at(i) && str.at(i) <= 'Z')
			str.at(i) += ('a' - 'A');
	}
}
void Histogram::draw() {
	cout << str << endl;

	upper_to_lower();
	for (int i = 0; i < str.length(); i++) {
		if ('a' <= str.at(i) && str.at(i) <= 'z') {
			cnt++;
			alpha_cnt[str.at(i) - 'a']++;
		}
	}
	cout << "\n총 알파벳 수 " << cnt << endl << endl;

	for (int i = 0; i < 26; i++) {
		cout << char(i + 'a') << '(' << alpha_cnt[i] << ')' << " : ";
		for (int j = 0; j < alpha_cnt[i]; j++) {
			cout << '*';
		}
		cout << endl;
	}

}
int main() {
	Histogram histo("You fill up my senses, like a night in a forest\n");
	histo.add("Like the mountains in springtime, like a walk in the rain\n");
	histo.addc('-');
	histo.add("Annie's Song by John Denver");
	histo.draw();
	return 0;
}
