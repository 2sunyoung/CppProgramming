// Title : 클래스가 2개인 커피 자판기 프로그램
// Author : Lee sunyoung
// Data : 26.4.16

#include <iostream>
#include <string>
using namespace std;
class Container {
	int size;
public:
	Container() { size = 10; }
	void fill(int n);
	bool consume(int n);
	int getSize();
};

void Container::fill(int n) {
	size += n;
	if (size > 10) 
		size = 10;
}

bool Container::consume(int n) {
	if (size < n)
		return false;
	size -= n;
	return true;
}

int Container::getSize() {
	return size;
}

class CoffeeVendingMachine {
	Container tong[3];
	void fill();
	void getEspresso();
	void getAmericano();
	void getSugarCoffee();
	void show();
public:
	void run();
};

void CoffeeVendingMachine::fill() {
	for (int i = 0; i < 3; i++) 
		tong[i].fill(10);
	show();
}

void CoffeeVendingMachine::getEspresso() {
	if (tong[0].getSize() < 1 || tong[1].getSize() < 1) {
		cout << "원료가 부족합니다." << endl;
		return;
	}
	tong[0].consume(1); tong[1].consume(1);
	cout << "에스프레소 드세요" << endl;
}

void CoffeeVendingMachine::getAmericano() {
	if (tong[0].getSize() < 1 || tong[1].getSize() < 2) {
		cout << "원료가 부족합니다." << endl;
		return;
	}
	tong[0].consume(1); tong[1].consume(2);
	cout << "아메리카노 드세요" << endl;
}

void CoffeeVendingMachine::getSugarCoffee() {
	if (tong[0].getSize() < 1 || tong[1].getSize() < 2 || tong[2].getSize() < 1) {
		cout << "원료가 부족합니다." << endl;
		return;
	}
	tong[0].consume(1); tong[1].consume(2); tong[2].consume(1);
	cout << "설탕커피 드세요" << endl;
}

void CoffeeVendingMachine::show() {
	cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl;
}

void CoffeeVendingMachine::run() {
	int menu;
	cout << "***** 커피자판기를 작동합니다. *****" << endl;
	while (true) {
		cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> ";
		cin >> menu;

		if (menu == 1) getEspresso();
		else if (menu == 2) getAmericano();
		else if (menu == 3) getSugarCoffee();
		else if (menu == 4) show();
		else if (menu == 5) fill();
		else return;
	}
}

int main() {
	CoffeeVendingMachine machine;
	machine.run();
	return 0;
}
