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

