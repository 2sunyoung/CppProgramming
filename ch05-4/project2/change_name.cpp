// Title : 이름 바꾸기 프로그램 (string 클래스 사용)
// Author : Lee sunyoung
// Data : 26.5.14

#include <iostream>
#include <string>
using namespace std;
class Person {
	string name;
	int id;
public:
	Person(int id, string name);
	void changeName(string name);
	void show() { cout << id << ',' << name << endl; }
};
Person::Person(int id, string name) { 
	this->id = id; 
	this->name = name;
}
void Person::changeName(string name) {
	this->name = name;
}
int main() {
	Person father(1, "Kitae"); 
	Person daughter(father); 
	cout << "daughter 객체 생성 직후 ----" << endl;
	father.show(); 
	daughter.show(); 
	daughter.changeName("Grace"); 
	cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
	father.show(); 
	daughter.show();
	return 0;
}
