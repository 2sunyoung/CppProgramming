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


# 문제 7 소스코드 설명

```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream을 포함한다.

```cpp
using namespace std;
```
- std 이름 공간에 선언된 모든 이름에 std::생략

```cpp
class Storage {
```
- Storage 클래스 선언부

```cpp
private:
```
- 멤버 변수에 대한 접근 지정자를 private으로 함 (외부 접근 불가)

```cpp
	double tem[10] = { 0 };
```
- 10개의 체온값을 저장할 실수형 배열 tem 선언 & 모든 요소 0으로 초기화

```cpp
	int idx;
```
- 인덱스 변수 선언 

```cpp
public:
```
- 멤버 함수에 대한 접근 지정자를 public으로 함 (외부 접근 가능)

```cpp
	Storage() :idx(0) {};
```
- 매개 변수가 없는 생성자 (멤버 초기화 리스트를 통해 idx = 0으로 초기화)

```cpp
	void put(double t);
```
- 체온을 배열에 저장하는 함수 put 선언

```cpp
	void dump();
```
- 배열에 저장된 모든 체온 값을 출력하는 함수 dump 선언 

```cpp
	double getAvg();
```
- 체온의 평균을 구하는 함수 getAvg 선언

```cpp
void Storage::put(double t) {
```
- put 함수 정의

```cpp
	if (idx == 10) {
```
- idx 가 10이라면

```cpp
		cout << "체온 값은 최대 10개까지만 저장이 가능합니다..." << endl;
```
- 배열이 가득 찼으므로 값은 10개까지만 저장이 가능하다는 메시지 출력

```cpp
	else {
```
- 그밖의 경우 

```cpp
		tem[idx] = t;
```
- tem 배열 요소에 사용자가 적은 인자값을 대입

```cpp
		idx++;
```
- 다음 값 저장을 위해 인덱스 변수는 1 증가 시켜줌  

```cpp
void Storage::dump() {
```
- dump 함수 정의

```cpp
	for (int i = 0; i < idx; i++)
```
- 체온 값을 출력하기 위한 for문 (i가 0부터 idx까지 1씩 증가하며 반복)

```cpp
		cout << tem[i] << " ";
```
- 배열에 저장된 모든 체온 값들을 띄어쓰기로 구분하며 출력

```cpp
double Storage::getAvg() {
```
- getAvg 함수 정의

```cpp
	double total = 0;
```
- 체온의 총합을 넣을 실수형 변수 total 선언 및 초기화 (이 함수가 호출될 때마다 total값이 리셋 되어야 하기 때문에 멤버변수가 아닌 지역변수로 선언)

```cpp
	for (int i = 0; i < idx; i++)
```
- 배열 안 요소들을 모두 더한 값을 total 변수 안에 넣기 위한 for문 (i가 0부터 idx까지 1씩 증가하며 반복)

```cpp
		total += tem[i];
```
- 배열 안 요소들을 total 변수에 누적합함

```cpp
	return total / idx;
```
- 체온의 평균을 리턴

```cpp
int main() {
```
- 메인함수 시작

```cpp
	Storage a;
```
- Storage 클래스형 변수(객체) a 생성, Storage()이 실행됨 (idx = 0으로 초기화) 

```cpp
	a.put(36.7);
```
- put 함수를 호출하여 체온 36.7을 저장

```cpp
	a.put(36.9);
```
- put 함수를 호출하여 체온 36.9를 저장

```cpp
	a.put(36.4);
```
- put 함수를 호출하여 체온 36.4를 저장

```cpp
	a.dump();
```
- dump 함수 호출

```cpp
	cout << "\n평균 체온은 " << a.getAvg() << "입니다." << endl;
```
- getAvg 함수를 호출하여 평균 체온 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="571" height="172" alt="image" src="https://github.com/user-attachments/assets/35ba0457-fdc5-4a61-9a16-dc0199ed3be9" />


# 문제 10 소스코드 설명

```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream을 포함한다.

```cpp
using namespace std;
```
- std 이름 공간에 선언된 모든 이름에 std::생략

```cpp
class Pipe {
```
- Pipe 클래스 선언부

```cpp
private:
```
- 멤버 변수에 대한 접근 지정자를 private으로 함 (외부 접근 불가)

```cpp
	int data[10];
```
- 파이프 내 숫자를 저장할 정수형 배열 data 선언

```cpp
	int index;
```
- 도착하는 정수를 저장할 위치를 나타내는 data 배열의 인덱스 변수 선언

```cpp
public:
```
- 멤버 함수에 대한 접근 지정자를 public으로 함 (외부 접근 가능)

```cpp
	Pipe();
```
- 매개 변수가 없는 생성자 선언

```cpp
	int arrive(int n);
```
- 파이프 맨 뒤에 n을 삽입, 꽉 차 있으면 정수들을 앞으로 밀고 제거된 맨 앞의 수를 리턴, 꽉 차 있지 않으면 -1을 리턴하는 함수 arrive 선언 

```cpp
	int shift();
```
- 파이프 내 정수들을 앞으로 밀고, 제거된 맨 앞의 수를 리턴, 마지막 요소에는 0을 대입해주는 함수 shift 선언

```cpp
	void show();
```
- 파이프 내 정수들을 모두 출력하는 함수 show 선언

```cpp
Pipe::Pipe(): index(0) {
```
- 매개 변수가 없는 생성자 정의 (멤버 초기화 리스트를 통해 index = 0으로 초기화)

```cpp
	for (int i = 0; i < 10; i++) {
```
- data 배열의 요소를 모두 0으로 초기화하기 위한 for문 (i가 0부터 10까지 1씩 증가하며 반복)

```cpp
		data[i] = 0;
```
- data의 i번째 요소에 0을 대입

```cpp
int Pipe::arrive(int n) {
```
- arrive 함수 정의

```cpp
	if (index == 10) {
```
- index가 10이라면 (파이프가 꽉 찼다면)

```cpp
		int frontNum = shift();
```
- 맨 앞의 수를 담을 정수형 변수 frontNum 선언 & shift() 함수 호출 (파이프 내 정수를 왼쪽으로 미는 코드가 중복되어 shift 함수를 호출)

```cpp
		data[9] = n;
```
- 마지막 요소에 n 대입

```cpp
		return frontNum;
```
- data[0]을 리턴함

```cpp
	else {
```
- 그밖의 경우에 (파이프가 꽉 차지 않은 경우)

```cpp
		data[index] = n;
```
- index 자리에 해당하는 요소에 n 대입 

```cpp
		index++;
```
- index 1 증가 (다음 칸에 수를 넣어줘야 하니까) 

```cpp
		return -1;
```
- -1을 리턴함

```cpp
int Pipe::shift() {
```
- shift 함수 정의

```cpp
	int frontNum = data[0];
```
- 맨 앞의 수를 담을 정수형 변수 frontNum 선언 및 data의 첫번째 요소로 초기화

```cpp
	for (int i = 1; i < 10; i++) {
```
- 정수를 왼쪽으로 한칸씩 밀어버릴 용도의 for문 (i가 1부터 10까지 1씩 증가하며 반복)

```cpp
		data[i - 1] = data[i];
```
-  i-1번째 요소에 i번째 요소를 대입 (한칸씩 밀어준 것) 

```cpp
	data[9] = 0;
```
- 마지막 요소에 0 대입

```cpp
	return frontNum;
```
- data[0]을 리턴함

```cpp
void Pipe::show() {
```
- show 함수 선언

```cpp
	cout << "파이프 내부 [";
```
- 파이프 내부 메시지 출력

```cpp
	for (int i = 0; i < 10; i++) {
```
- 파이프 내부의 정수들을 모두 출력하기 위한 for문 (i가 0부터 10까지 1씩 증가하며 반복) 

```cpp
		cout << data[i] << " ";
```
- 배열의 요소들을 띄어쓰기로 구분하며 출력

```cpp
	cout << "]" << endl;
```
- 괄호 닫는 메시지 출력 후 줄바꿈

```cpp
int main() {
```
- 메인함수 시작

```cpp
	Pipe pipe;
```
- Pipe 클래스형 변수(객체) pipe 생성, 인자값이 없기 때문에 Pipe()이 실행됨 (index = 0, data[10] = {0})

```cpp
	for (int i = 0; i < 6; i++) pipe.arrive(i);
```
- 0~5까지 파이프에 숫자 삽입

```cpp
	pipe.show();
```
- 현재 파이프 내부 숫자들 출력

```cpp
	for (int i = 6; i < 12; i++) pipe.arrive(i);
```
- 6~12까지 파이프에 숫자 삽입

```cpp
	pipe.show();
```
- 현재 파이프 내부 숫자들 출력

```cpp
	int front = pipe.shift();
```
- 정수형 변수 front를 선언하고, shift 함수를 호출하여 맨 앞 데이터를 뽑아 넣음

```cpp
	cout << "shift()로 제거된 맨 앞 데이터 : " << front << endl;
```
- shift()로 제거된 맨 앞 데이터 출력

```cpp
	pipe.show();
```
- 현재 파이프 내부 숫자들 출력

```cpp
	front = pipe.arrive(50);
```
- arrive 함수를 호출하고 파이프의 맨 뒤에 50 삽입함, 밀려서 제거된 맨 앞 데이터가 있다면 front에 그 데이터가 저장되고, 파이프가 꽉 차 있지 않아 제거된 맨 앞 데이터가 없다면 front에 -1이 저장됨

```cpp
	cout << "arrive(50)로 제거된 맨 앞 데이터 : " << front << endl;
```
- arrive(50)로 제거된 맨 앞 데이터 출력

```cpp
	pipe.show();
```
- 현재 파이프 내부 숫자들 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="581" height="245" alt="image" src="https://github.com/user-attachments/assets/ddf1848e-66ee-4919-a5b0-1e7cb5b93c1c" />
