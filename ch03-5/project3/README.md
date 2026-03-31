# 문제5 소스코드 설명

```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream을 포함한다.

```cpp
using namespace std;
```
- std 이름 공간에 선언된 모든 이름에 std::생략

```cpp
class CoffeeMachine {
```
- CoffeeMachine 클래스 선언부

```cpp
private:
```
- 멤버 변수에 대한 접근 지정자를 private으로 함 (외부 접근 불가)

```cpp
	int coffee, water, sugar;
```
- 커피 머신에 남아있는 커피, 물, 설탕의 수를 담을 정수형 변수 coffee, water, sugar 선언

```cpp
public:
```
- 멤버 함수에 대한 접근 지정자를 public으로 함 (외부 접근 가능)

```cpp
	CoffeeMachine(int c, int w, int s): coffee(c), water(w), sugar(s) {}
```
- 정수형 변수 c, w, s를 매개 변수로 가지는 생성자 정의 (멤버 초기화 리스트를 통해 멤버 변수들을 인자값으로 초기화) 

```cpp
	void show() { cout << "[머신 상태] 커피:" << coffee << " 물:" << water << " 설탕:" << sugar << endl; }
```
- 머신 상태를 출력하는 함수 show 정의 

```cpp
	void fill() { coffee = 10, water = 10, sugar = 10; }
```
- 커피, 물, 설탕의 값을 10으로 채우는 함수 fill 정의

```cpp
	void drinkEspresso() {
```
- 커피 1, 물 1을 소비하는 drinkEspresso 함수 정의

```cpp
		coffee -= 1;
```
- 커피가 1 소비됨

```cpp
		water -= 1;
```
- 물이 1 소비됨

```cpp
	void drinkAmericano() {
```
- 커피 1, 물 2을 소비하는 drinkAmericano 함수 정의

```cpp
		coffee -= 1;
```
- 커피가 1 소비됨

```cpp
		water -= 2;
```
- 물이 2 소비됨

```cpp
	void drinkSugarCoffee() {
```
- 커피 1, 물 2, 설탕 1을 소비하는 drinkSugarCoffee 함수 정의

```cpp
		coffee -= 1;
```
- 커피가 1 소비됨

```cpp
		water -= 2;
```
- 물이 2 소비됨

```cpp
		sugar -= 1;
```
- 설탕이 1 소비됨 

```cpp
int main() {
```
- 메인함수 시작

```cpp
	CoffeeMachine java(5, 10, 6);
```
- CoffeeMachine 클래스형 변수(객체) java 생성, 생성자 실행 (coffee = 5, water = 10, sugar = 6)

```cpp
	java.drinkEspresso();
```
- drinkEspresso 함수 호출

```cpp
	java.show();
```
- show 함수를 호출하여 현재 머신 상태 출력

```cpp
	java.drinkAmericano();
```
- drinkAmericano 함수 호출

```cpp
	java.show();
```
- show 함수를 호출하여 현재 머신 상태 출력

```cpp
	java.drinkSugarCoffee();
```
- drinkSugarCoffee 함수 호출

```cpp
	java.show();
```
- show 함수를 호출하여 현재 머신 상태 출력 

```cpp
	java.fill();
```
- fill 함수를 호출하여 커피, 물, 설탕 변수에 각각 10씩 채운다

```cpp
	java.show();
```
- show 함수를 호출하여 현재 머신 상태 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="582" height="203" alt="image" src="https://github.com/user-attachments/assets/54602c6f-9a60-49e9-b82a-015dced69264" />
