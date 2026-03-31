// Title : 커피 머신을 돌리는 프로그램
// Author : Lee sunyoung
// Data : 26.3.30

#include <iostream>
using namespace std;
class CoffeeMachine {
private:
	int coffee, water, sugar;
public:
	CoffeeMachine(int c, int w, int s): coffee(c), water(w), sugar(s) {}
	void show() { cout << "[머신 상태] 커피:" << coffee << " 물:" << water << " 설탕:" << sugar << endl; }
	void fill() { coffee = 10, water = 10, sugar = 10; }
	void drinkEspresso() {
		coffee -= 1;
		water -= 1;
	}
	void drinkAmericano() {
		coffee -= 1;
		water -= 2;
	}
	void drinkSugarCoffee() {
		coffee -= 1;
		water -= 2;
		sugar -= 1;
	}
};
int main() {
	CoffeeMachine java(5, 10, 6);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
	return 0;
}
