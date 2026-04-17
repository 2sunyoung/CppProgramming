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
