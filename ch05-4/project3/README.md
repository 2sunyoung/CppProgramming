# 소스코드 설명

```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream을 포함한다.

```cpp
using namespace std;
```
- std 이름 공간에 선언된 모든 이름에 std::생략

```cpp
class MyStack {
```
- MyStack 클래스 선언부

```cpp
	int* p;
```
- 정수를 저장할 동적 배열에 대한 포인터 선언

```cpp
	int size = 0;
```
- 동적 배열의 크기를 저장할 정수형 변수 size 선언 및 0으로 초기화

```cpp
	int tos = 0;
```
- 스택의 top 즉, 다음에 저장될 배열 원소의 인덱스 변수 tos 선언 및 0으로 초기화

```cpp
public:
```
- 멤버 함수에 대한 접근 지정자를 public으로 함 (외부 접근 가능)

```cpp
	MyStack(): MyStack(10) {}
```
- 매개변수가 없는 생성자 정의, 위임 생성자를 이용하여 size의 값을 10으로 초기화

```cpp
	MyStack(int size) {
```
- size를 매개변수로 가지는 생성자 정의

```cpp
		this->size = size;
```
- 내 클래스의 size를 전달받은 size로 저장

```cpp
		p = new int[size];
```
- size만큼의 정수형 배열 동적할당 

```cpp
	MyStack(const MyStack& src) {
```
- 복사 생성자 정의 

```cpp
		this->size = src.size;
```
- src의 size를 현재 객체의 size에 대입

```cpp
		this->tos = src.tos;
```
- src의 tos를 현재 객체의 tos에 대입

```cpp
		this->p = new int[this->size];
```
- 복사 대상의 객체와 같은 size의 정수형 배열을 새롭게 동적 할당

```cpp
		for (int i = 0;i < this->size;i++) {
```
- 배열의 요소들을 복사하기 위한 for문 (i가 0부터 size-1까지 1씩 증가하며 반복)

```cpp
			this->p[i] = src.p[i];
```
- src의 배열의 i번째 정수를 현재 객체의 배열의 i번째 정수에 대입 

```cpp
	~MyStack() {
```
- 소멸자 정의

```cpp
		if(p) delete[] p;
```
- p가 NULL이 아니면(=메모리를 가리키고 있으면) 메모리 정상 반납

```cpp
	bool push(int n) {
```
- 스택에 n의 값을 넣고 스택의 상태에 따라 bool값을 리턴하는 push 함수 정의

```cpp
		if (size == tos)
```
- size와 tos가 같다면

```cpp
			return false;
```
- 스택이 꽉 차 있으므로 false 리턴

```cpp
		else {
```
- 그 밖의 경우에 

```cpp
			p[tos++] = n;
```
- tos번째의 공간에 n을 삽입하고 tos는 1증가시켜줌 (다음 저장을 위해 인덱스를 이동시켜 주는 것)

```cpp
			return true;
```
- true 리턴

```cpp
	bool pop(int& n) {
```
- 스택의 top 값을 n에 삽입하고(=pop하고) 스택의 상태에 따라 bool값을 리턴하는 pop 함수 정의

```cpp
		if (tos == 0)
```
- tos가 0이면

```cpp
			return false;
```
- 스택이 비어 있으므로 false 리턴

```cpp
		else {
```
- 그 밖의 경우에

```cpp
			n = p[--tos];
```
- tos-1번째에 해당하는 값을 n에 pop해줌

```cpp
			return true;
```
- true 리턴

```cpp
int main() {
```
- 메인함수 시작

```cpp
	MyStack a(10);
```
- size를 10으로 하는 MyStack의 객체 a 생성

```cpp
	a.push(10); a.push(20);
```
- a의 push함수를 2번 호출하여 값을 2번 넣어줌

```cpp
	MyStack b = a;
```
- 객체 a를 복사하여 객체 b 생성

```cpp
	b.push(30);
```
- b의 push 함수를 호출하여 값을 넣어줌 현재 스택에는 10-20-30 순서로 저장되어 있음

```cpp
	int n;
```
- 정수형 변수 n 선언

```cpp
	a.pop(n);
```
- a의 pop함수를 호출 (top의 값이 pop됨)

```cpp
	cout << "스택 a에서 팝한 값 " << n << endl;
```
- 스택 a에서 팝한 값 출력 

```cpp
	b.pop(n);
```
- b의 pop함수를 호출 (top의 값이 pop됨)

```cpp
	cout << "스택 b에서 팝한 값 " << n << endl;
```
- 스택 b에서 팝한 값 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="541" height="167" alt="image" src="https://github.com/user-attachments/assets/f34cb9c7-11d1-4f8a-a057-82dd743c57bf" />
