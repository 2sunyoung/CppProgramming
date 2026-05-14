# 소스코드 설명

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
class Person {
```
- Person 클래스 선언부

```cpp
	string name;
```
- 이름을 저장할 string 객체 name 선언

```cpp
	int id;
```
- 번호를 저장할 정수형 변수 id 선언

```cpp
public:
```
- 멤버 함수에 대한 접근 지정자를 public으로 함 (외부 접근 가능)

```cpp
	Person(int id, string name);
```
- id와 name을 매개변수로 가지는 생성자 선언

```cpp
	void changeName(string name);
```
- 이름을 바꾸는 함수 changeName 선언

```cpp
	void show() { cout << id << ',' << name << endl; }
```
- 출력 함수 show 선언

```cpp
Person::Person(int id, string name) {
```
- 생성자 정의

```cpp
	this->id = id;
```
- id를 해당 인자값으로 초기화

```cpp
	this->name = name;
```
- name을 해당 인자값으로 초기화

```cpp
void Person::changeName(string name) {
```
- changemName 함수 정의 

```cpp
	this->name = name;
```
- name을 해당 인자값으로 초기화 (인자값으로 이름 변경)

```cpp
int main() {
```
- 메인함수 시작

```cpp
	Person father(1, "Kitae");
```
- Person 클래스의 객체 father 생성, id=1, name="Kitae"로 초기화

```cpp
	Person daughter(father);
```
- Person 클래스의 객체 daughter 생성, 컴파일러가 디폴트 복사생성자를 넣어줌 (father 객체를 이용해 멤버변수 복사)

```cpp
	cout << "daughter 객체 생성 직후 ----" << endl;
```
- "daughter 객체 생성 직후 ----" 문구 출력

```cpp
	father.show();
```
- father 객체의 멤버함수 show 호출

```cpp
	daughter.show();
```
- daughter 객체의 멤버함수 show 호출

```cpp
	daughter.changeName("Grace");
```
- daughter 객체의 멤버함수 changeName 호출, name을 "Grace"로 바꿈 

```cpp
	cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
```
- "daughter 이름을 Grace로 변경한 후 ----" 문구 출력

```cpp
	father.show();
```
- father 객체의 멤버함수 show 호출

```cpp
	daughter.show();
```
- daughter 객체의 멤버함수 show 호출

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="786" height="302" alt="image" src="https://github.com/user-attachments/assets/be1490df-da5a-4c70-abe9-d5da67ff9a37" />
