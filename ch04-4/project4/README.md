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
class Container {
```
- Container 클래스 선언부

```cpp
	int* p;
```
- 정수 배열에 대한 포인터

```cpp
	int size;
```
- 정수 배열의 크기

```cpp
public:
```
- 멤버 함수에 대한 접근 지정자를 public으로 함 (외부 접근 가능)

```cpp
	Container(int size);
```
- size를 매개변수로 가지는 생성자 선언

```cpp
	~Container();
```
- 소멸자 선언

```cpp
	void read();
```
- 배열의 크기만큼 정수를 입력받는 함수 read 선언

```cpp
	void write();
```
- 배열에 저장된 전체 정수를 출력하는 함수 write 선언

```cpp
	void rotate();
```
-  배열의 원소들을 오른쪽으로 회전시키는 함수 rotate 선언

```cpp
	double avg();
```
- 평균을 계산하여 리턴하는 함수 avg 선언

```cpp
Container::Container(int size) {
```
- size를 매개변수로 가지는 생성자 정의ㅣ

```cpp
	this->size = size;
```
- 멤버변수 size에 매개 변수 size의 값을 대입

```cpp
	p = new int[size];
```
- 정수형 배열 p 동적 생성

```cpp
	if (!p) cout << "메모리를 할당할 수 없습니다.";
```
- p==NULL일 때 오류 문구 출력

```cpp
Container::~Container() {
```
- 소멸자 정의

```cpp
	delete[]p;
```
- 메모리 반환

```cpp
void Container::read() {
```
- read함수 정의

```cpp
	cout << "정수 " << size << "개 입력 >> ";
```
- 정수를 size개 입력하라는 문구 출력

```cpp
	for (int i = 0; i < size; i++)
```
- 정수 배열에 값을 입력받기 위한 for문 (i가 0부터 size-1까지 1씩 증가하며 반복)

```cpp
		cin >> p[i];
```
- i번째 인덱스의 값을 하나씩 입력받아서 배열 p에 채워나감

```cpp
void Container::write() {
```
- write 함수 정의

```cpp
	for (int i = 0; i < size; i++)
```
- 정수 배열의 값을 출력하기 위한 for문 (i가 0부터 size-1까지 1씩 증가하며 반복)

```cpp
		cout << p[i] << ' ';
```
- 배열 p의 i번째 인덱스의 값을 하나씩 출력함

```cpp
	cout << endl;
```
- 줄바꿈 출력

```cpp
void Container::rotate() {
```
- rotate 함수 정의

```cpp
	int end = p[size - 1];
```
- 배열의 마지막 값을 저장할 정수형 변수 end 선언, 배열의 마지막 요소값으로 초기화

```cpp
	for (int i = size - 1; i > 0; i--) {
```
- 배열의 요소들을 오른쪽으로 회전하기위한 for문 (i가 size - 1부터 1까지 1씩 감소하며 반복)

```cpp
		p[i] = p[i - 1];
```
- i번째 인덱스의 값에 i-1번째 인덱스의 값 저장

```cpp
	p[0] = end;
```
- 마지막 값을 맨 앞 인덱스 자리에 저장

```cpp
double Container::avg() {
```
- avg 함수 정의

```cpp
	int sum = 0;
```
- 총합을 저장할 정수형 변수 sum 선언 및 초기화

```cpp
	for (int i = 0; i < size; i++)
```
- 총합을 계산하기 위한 for문 (i가 0부터 size-1까지 1씩 증가하며 반복)

```cpp
		sum += p[i];
```
- p[i]들을 sum에 누적합함

```cpp
	return (double) sum / size;
```
- 평균 결과 리턴 (double로 형변환해줌)

```cpp
int main() {
```
- 메인함수 시작

```cpp
	Container c(10);
```
- 정수 10개를 저장할 객체 c 생성

```cpp
	c.read();
```
- read 함수를 호출하여 정수배열 채우기

```cpp
	c.write();
```
- write 함수를 호출하여 정수 배열 출력

```cpp
	c.rotate();
```
- rotate 함수를 호출하여 정수 배열을 오른쪽으로 회전

```cpp
	c.write();
```
- write 함수를 호출하여 정수 배열 출력

```cpp
	cout << "평균은 " << c.avg() << endl;
```
- avg함수를 호출하여 평균값 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="585" height="211" alt="image" src="https://github.com/user-attachments/assets/21ed4ebe-c487-4c7e-84e4-511685e570c4" />


# 문제9 소스코드 설명

```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream을 포함한다.

```cpp
#include <string>
```
- string 클래스를 사용하기 위한 헤더 파일 string 포함

```cpp
using namespace std;
```
- std 이름 공간에 선언된 모든 이름에 std::생략

```cpp
class Book {
```
- Book 클래스 선언부

```cpp
	string title;
```
- 책 제목을 저장할 string 객체 title 생성

```cpp
	int price;
```
- 책 가격을 저장할 정수형 변수 price 선언

```cpp
public:
```
- 멤버 함수에 대한 접근 지정자를 public으로 함 (외부 접근 가능)

```cpp
	Book() { title = ""; price = 0; }
```
- 매개변수가 없는 생성자 선언 및 정의 (title과 price를 초기화)

```cpp
	void set(string title, int price) { this->title = title; this->price = price; }
```
- 멤버 접근 함수 set 선언 및 정의 

```cpp
	string getTitle() { return title; }
```
- 책 제목을 반환하는 getTitle 함수 선언 및 정의

```cpp
	int getPrice() { return price; }
```
- 책 가격을 반환하는 getPrice 함수 선언 및 정의

```cpp
class Library {
```
- Library 클래스 선언부

```cpp
	string name;
```
- 도서관 이름을 저장할 string 객체 name 생성

```cpp
	Book* p;
```
- 동적 할당받을 Book [] 배열에 대한 포인터 p 선언

```cpp
	int size;
```
- 동적 할당받은 배열의 크기를 저장할 정수형 변수 size 선언

```cpp
	int next = 0;
```
- p[] 배열에 다음 삽입될 위치를 저장할 변수 next 선언 및 초기화

```cpp
public:
```
- 멤버 함수에 대한 접근 지정자를 public으로 함 (외부 접근 가능)

```cpp
	Library(string name, int size);
```
- name과 size를 매개변수로 가지는 생성자 선언

```cpp
	~Library();
```
- 소멸자 선언

```cpp
	void add(string title, int price);
```
- 책 한권이 입고될 때마다 정보를 저장할 함수 add 선언

```cpp
	void show();
```
- 도서관의 책들을 모두 출력할 함수 show 선언

```cpp
	Book* mostExpensive();
```
- 가장 비싼 Book 객체에 대한 포인터를 리턴하는 함수 mostExpensive 선언

```cpp
Library::Library(string name, int size) {
```
- name과 size를 매개변수로 가지는 생성자 정의

```cpp
	this->name = name;
```
- 멤버변수 name에 매개 변수 name의 값을 대입

```cpp
	this->size = size;
```
- 멤버변수 size에 매개 변수 size의 값을 대입

```cpp
	p = new Book[size];
```
- 객체 배열 p 동적 생성

```cpp
	if (!p) cout << "메모리를 할당할 수 없습니다.";
```
- p==NULL일 때 오류 문구 출력

```cpp
Library::~Library() {
```
- 소멸자 정의

```cpp
	delete[] p;
```
- 메모리 반환

```cpp
void Library::add(string title, int price) {
```
- add 함수 정의

```cpp
	p[next].set(title, price);
```
- p의 next번째 객체에 추가된 책의 정보 입력

```cpp
	next++;
```
- next를 1 증가시킴

```cpp
void Library::show() {
```
- show 함수 정의

```cpp
	cout << name << "에 입고된 책은 다음 " << next << "권입니다." << endl;
```
- 도서관에 입고된 책의 개수를 소개하는 문구 출력

```cpp
	for (int i = 0; i < next; i++) {
```
- 도서관에 입고된 책들을 출력하기 위한 for문 (i가 0부터 next-1까지 1씩 증가하며 반복)

```cpp
		cout << "[" << p[i].getTitle() << "] ";
```
- getTitle 함수를 호출하여 책 제목을 출력

```cpp
	cout << endl;
```
- 줄바꿈 출력

```cpp
Book* Library::mostExpensive() {
```
- mostExpensive 함수 정의

```cpp
	if (next == 0)
```
- next가 0이라면

```cpp
		return NULL;
```
- NULL 리턴

```cpp
	int max = 0;
```
- max 인덱스 변수 선언 및 초기화

```cpp
	for (int i = 1; i < next; i++) {
```
- 가장 비싼 책을 골라내기 위한 for문 (i가 1부터 next-1까지 1씩 증가하며 반복)

```cpp
		if (p[max].getPrice() < p[i].getPrice())
```
- p[i].getPrice()가 p[max].getPrice()보다 크다면

```cpp
			max = i;
```
- max에 해당 인덱스 i 저장

```cpp
	return &p[max];
```
- max번째 객체의 주소 리턴

```cpp
int main() {
```
- 메인함수 시작

```cpp
	Library* lib = new Library("한국도서관", 10);
```
- Library의 객체 lib를 동적으로 생성, 생성자 호출하여 name과 size 초기화

```cpp
	if (!lib) {
```
- lib==NULL이라면

```cpp
		cout << "메모리를 할당할 수 없습니다.";
```
- 오류 문구 출력

```cpp
		return -1;
```
- -1을 반환하고 메인함수 비정상 종료

```cpp
	lib->add("명품 C++", 30000);
```
- add함수를 호출하여 "명품 C++" 책을 가격 30000으로 추가

```cpp
	lib->add("라즈베리파이", 34000);
```
- add함수를 호출하여 "라즈베리파이" 책을 가격 34000으로 추가

```cpp
	lib->add("HTML5", 33000);
```
- add함수를 호출하여 "HTML5" 책을 가격 33000으로 추가

```cpp
	lib->show();
```
- show 함수 호출

```cpp
	Book* b = lib->mostExpensive();
```
- mostExpensive함수를 호출하여 객체 포인터 b에 가장 비싼 책의 주소값을 저장

```cpp
	cout << "가장 비싼 책:" << b->getTitle() << "," << b->getPrice() << endl;
```
- 가장 비싼 책의 제목과 가격 출력

```cpp
	delete lib;
```
- 메모리 반환 

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="575" height="190" alt="image" src="https://github.com/user-attachments/assets/0d3bdbe5-9c62-4c36-9852-86b507f40e17" />


# 문제 11 소스코드 설명

```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream을 포함한다.

```cpp
using namespace std;
```
- std 이름 공간에 선언된 모든 이름에 std::생략

```cpp
class Container {
```
- Container 클래스 선언부

```cpp
	int size;
```
- 현재 저장량(최대 저장량 10)을 저장할 정수형 변수 size 선언

```cpp
public:
```
- 멤버 함수에 대한 접근 지정자를 public으로 함 (외부 접근 가능)

```cpp
	Container() { size = 10; }
```
- 매개변수가 없는 생성자 선언 및 정의 (size를 10으로 초기화)

```cpp
	void fill(int n);
```
- 원료를 n만큼 채우는 함수 fill 선언

```cpp
	bool consume(int n);
```
- 원료를 n만큼 소모하는 함수 consume 선언

```cpp
	int getSize();
```
- 현재 크기를 리턴하는 함수 getSize 선언

```cpp
void Container::fill(int n) {
```
- fill 함수 정의

```cpp
	size += n;
```
- size = size + n 수행

```cpp
	if (size > 10)
```
- size가 10보다 커도

```cpp
		size = 10;
```
- size는 10으로 채움 (최대 저장량이 10이기 때문에)

```cpp
bool Container::consume(int n) {
```
- consume 함수 정의 

```cpp
	if (size < n)
```
- size이 n보다 작다면

```cpp
		return false;
```
- false 리턴 (원료가 부족하므로 소모할 수 없음)

```cpp
	size -= n;
```
- size = size - n 수행

```cpp
	return true;
```
- true 리턴 (원료가 의도대로 소모됨)

```cpp
int Container::getSize() {
```
- getSize 함수 정의

```cpp
	return size;
```
- size를 리턴

```cpp
class CoffeeVendingMachine {
```
- CoffeeVendingMachine 클래스 선언부


```cpp
	Container tong[3];
```
- 배열 안 요소 차례대로 커피, 물, 설탕의 원료수를 저장할 Container 객체 배열 tong 선언

```cpp
	void fill();
```
- 3개의 통을 모두 10으로 채울 함수 fill 선언

```cpp
	void getEspresso();
```
- 커피 1, 물 1을 소비하는 getEspresso 함수 정의

```cpp
	void getAmericano();
```
- 커피 1, 물 2을 소비하는 getAmericano 함수 정의

```cpp
	void getSugarCoffee();
```
- 커피 1, 물 2, 설탕 1을 소비하는 getSugarCoffee 함수 정의

```cpp
	void show();
```
- 현재 커피, 물, 설탕의 잔량을 출력할 함수 show 선언

```cpp
public:
```
- 멤버 함수에 대한 접근 지정자를 public으로 함 (외부 접근 가능)

```cpp
	void run();
```
- 커피 자판기를 작동시키는 함수 run 선언

```cpp
void CoffeeVendingMachine::fill() {
```
- fill 함수 정의

```cpp
	for (int i = 0; i < 3; i++)
```
- 3개의 통을 모두 10으로 채우기 위한 for문 (i가 0부터 2까지 1씩 증가하며 반복)

```cpp
		tong[i].fill(10);
```
- Container 클래스의 fill 함수를 호출하여 tong의 요소들을 10으로 채움

```cpp
	show();
```
- show 함수 호출하여 원료 수량 출력

```cpp
void CoffeeVendingMachine::getEspresso() {
```
- getEspresso 함수 정의

```cpp
	if (tong[0].getSize() < 1 || tong[1].getSize() < 1) {
```
- 커피와 물이 최소 1개도 없다면

```cpp
		cout << "원료가 부족합니다." << endl;
```
- 원료 부족 메시지 출력

```cpp
		return;
```
- getEspresso 함수 종료

```cpp
	tong[0].consume(1); tong[1].consume(1);
```
- 커피 1, 물 1 소모

```cpp
	cout << "에스프레소 드세요" << endl;
```
- 에스프레소 드세요 메시지 출력

```cpp
void CoffeeVendingMachine::getAmericano() {
```
- getAmericano 함수 정의

```cpp
	if (tong[0].getSize() < 1 || tong[1].getSize() < 2) {
```
- 커피와 물이 각각 최소 1개, 2개 없다면

```cpp
		cout << "원료가 부족합니다." << endl;
```
- 원료 부족 메시지 출력

```cpp
		return;
```
- getAmericano 함수 종료

```cpp
	tong[0].consume(1); tong[1].consume(2);
```
- 커피 1, 물 2 소모

```cpp
	cout << "아메리카노 드세요" << endl;
```
- 아메리카노 드세요 메시지 출력

```cpp
void CoffeeVendingMachine::getSugarCoffee() {
```
- getSugarCoffee 함수 정의

```cpp
	if (tong[0].getSize() < 1 || tong[1].getSize() < 2 || tong[2].getSize() < 1) {
```
- 커피와 물, 설탕이 각각 최소 1개, 2개, 1개가 없다면

```cpp
		cout << "원료가 부족합니다." << endl;
```
- 원료 부족 메시지 출력

```cpp
		return;
```
- getSugarCoffee 함수 종료

```cpp
	tong[0].consume(1); tong[1].consume(2); tong[2].consume(1);
```
- 커피 1, 물 2, 설탕 1 소모

```cpp
	cout << "설탕커피 드세요" << endl;
```
- 설탕커피 드세요 메시지 출력

```cpp
void CoffeeVendingMachine::show() {
```
- show 함수 정의

```cpp
	cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl;
```
- getSize함수를 호출하여 tong배열의 각각의 요소 (원료 잔량) 출력

```cpp
void CoffeeVendingMachine::run() {
```
- run 함수 정의

```cpp
	int menu;
```
- 메뉴 번호를 저장할 정수형 변수 menu 선언

```cpp
	cout << "***** 커피자판기를 작동합니다. *****" << endl;
```
- 커피자판기 작동 시작 문구 출력

```cpp
	while (true) {
```
- 커피 자판기를 메뉴번호대로 작동시키기 위한 while문 무한 반복

```cpp
		cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> ";
```
- 메뉴 선택 메시지 출력

```cpp
		cin >> menu;
```
- 입력받은 메뉴 번호를 menu에 저장 

```cpp
		if (menu == 1) getEspresso();
```
- menu가 1이라면 getEspresso 함수 호출

```cpp
		else if (menu == 2) getAmericano();
```
- menu가 2라면 getAmericano 함수 호출

```cpp
		else if (menu == 3) getSugarCoffee();
```
- menu가 3이라면 getSugarCoffee 함수 호출

```cpp
		else if (menu == 4) show();
```
- menu가 4라면 show 함수 호출

```cpp
		else if (menu == 5) fill();
```
- menu가 5라면 fill 함수 호출

```cpp
		else return;
```
- 그 밖의 경우에 run 함수 종료

```cpp
int main() {
```
- 메인함수 시작

```cpp
	CoffeeVendingMachine machine;
```
- CoffeeVendingMachine 클래스형 변수(객체) machine 생성

```cpp
	machine.run();
```
- run 함수 호출

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="788" height="331" alt="image" src="https://github.com/user-attachments/assets/ee7b5cc5-e9e8-4052-bd6d-9ab6d628073d" />


# 문제 13 소스코드 설명

```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream을 포함한다.

```cpp
#include <string>
```
- string 클래스를 사용하기 위한 헤더 파일 string 포함

```cpp
using namespace std;
```
- std 이름 공간에 선언된 모든 이름에 std::생략

```cpp
class Histogram {
```
- Histogram 클래스 선언부

```cpp
	string str;
```
- 문자열을 저장할 string 객체 str 선언

```cpp
	int cnt = 0;
```
- 총 알파벳 수를 세기 위한 카운트 변수 선언 및 초기화

```cpp
	int alpha_cnt[26] = { 0, };
```
- 26개의 알파벳이 각각 몇번 등장하는지 개수를 저장할 배열 alpha_cnt 선언 및 초기화

```cpp
public:
```
- 멤버 함수에 대한 접근 지정자를 public으로 함 (외부 접근 가능)

```cpp
	Histogram(string s):str(s) {}
```
- s를 매개변수로 가지는 생성자 정의 (str 을 s로 초기화)

```cpp
	void add(string s) { str += s; }
```
- 문자열을 이어주는 함수 add 선언 및 정의 

```cpp
	void addc(char c) { str += c; }
```
- 문자를 문자열에 추가하는 함수 addc 선언 및 정의

```cpp
	void draw();
```
- 원문 텍스트와 히스토그램 모두 출력할 함수 draw 선언

```cpp
	void upper_to_lower();
```
- 대문자를 소문자로 변환하는 함수 upper_to_lower 선언

```cpp
void Histogram::upper_to_lower() {
```
- upper_to_lower 함수 정의

```cpp
	for (int i = 0; i < str.length(); i++) {
```
- 대문자를 소문자로 변환하기 위한 for문 (i가 0부터 문자열을 끝까지 1씩 증가하며 반복)

```cpp
		if ('A' <= str.at(i) && str.at(i) <= 'Z')
```
- str[i]가 대문자라면

```cpp
			str.at(i) += ('a' - 'A');
```
- str[i](현재 대문자)에 'a' - 'A'라는 일정한 값을 더해줌으로써 소문자로 변환 가능 (아스키코드 상에서 대문자보다 소문자가 더 크기 때문에 가능한 것)

```cpp
void Histogram::draw() {
```
- draw 함수 정의

```cpp
	cout << str << endl;
```
- 최종 문자열 출력

```cpp
	upper_to_lower();
```
- upper_to_lower 함수 호출 (str의 알파벳은 모두 소문자가 됨)

```cpp
	for (int i = 0; i < str.length(); i++) {
```
- 총 알파벳 수를 세기 위한 for문 (i가 0부터 문자열을 끝까지 1씩 증가하며 반복)

```cpp
		if ('a' <= str.at(i) && str.at(i) <= 'z') {
```
- str[i]가 소문자라면

```cpp
			cnt++;
```
- cnt를 1씩 증가시킴

```cpp
			alpha_cnt[str.at(i) - 'a']++;
```
- str[i]의 값에서 a의 값을 뺀 것을 인덱스로 삼아 alpha_cnt 배열에 알파벳을 카운팅해줌 (alpha_cnt[0='a'의 개수,1='b', ...25='z'])

```cpp
	cout << "\n총 알파벳 수 " << cnt << endl << endl;
```
- 총 알파벳 수 출력

```cpp
	for (int i = 0; i < 26; i++) {
```
- 히스토그램을 출력하기 위한  for문 (i가 0부터 25까지 1씩 증가하며 반복)

```cpp
		cout << char(i + 'a') << '(' << alpha_cnt[i] << ')' << " : ";
```
- a(7) : => 이런 형태로 출력 (i + 'a'는 0+'a' = 'a', 1+'a' = 'b', ... 이런 메커니즘임, 문자로 출력해야하니까 형변환 해준것)

```cpp
		for (int j = 0; j < alpha_cnt[i]; j++) {
```
- 히스토그램의 *을 출력하기 위한 for문 (j가 0부터 alpha_cnt[i]-1까지 1씩 증가하며 반복)

```cpp
			cout << '*';
```
- alpha_cnt에 저장된 각각의 알파벳 카운트 개수만큼 *을 출력

```cpp
		cout << endl;
```
- 줄바꿈 출력

```cpp
int main() {
```
- 메인함수 시작

```cpp
	Histogram histo("You fill up my senses, like a night in a forest\n");
```
- Histrogram 객체 histo 생성 (생성자 호출되어 위 영어문구로 초기화)

```cpp
	histo.add("Like the mountains in springtime, like a walk in the rain\n");
```
- add 함수를 호출하여 위 영어문구를 이어줌

```cpp
	histo.addc('-');
```
- addc 함수를 호출하여 위 문자를 붙여줌

```cpp
	histo.add("Annie's Song by John Denver");
```
- add 함수를 호출하여 위 영어문구를 이어줌

```cpp
	histo.draw();
```
- draw 함수를 호출하여 전체 결과 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="573" height="741" alt="image" src="https://github.com/user-attachments/assets/c089fd0f-a69b-47a6-8bc0-25ccd8531578" />
