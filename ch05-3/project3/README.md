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
void SwapString(string& a, string& b);
```
- 문자열을 서로 바꾸기 위한 SwapString 함수 선언 (참조에 의한 호출)

```cpp
int main() {
```
- 메인함수 시작

```cpp
	string s1("hello");
```
- string 객체 s1 선언, "hello"로 초기화

```cpp
	string s2("world");
```
- string 객체 s2 선언, "world"로 초기화

```cpp
	cout << "교환전 문자열" << s1 << s2 << endl;
```
- 교환 전 문자열 출력

```cpp
	SwapString(s1, s2);
```
- SwapString 함수 호출

```cpp
	cout << "교환후 문자열" << s1 << s2 << endl;
```
- 교환 후 문자열 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료

```cpp
void SwapString(string& a, string& b) {
```
- SwapString 함수 정의

```cpp
	string tmp;
```
- 문자열을 임시로 저장하고 교체할 목적의 string 객체 tmp 선언

```cpp
	tmp = a;
```
- tmp에 a 저장

```cpp
	a = b;
```
- a에 b 저장

```cpp
	b = tmp;
```
- b에 tmp 저장


# 실행결과
<img width="576" height="174" alt="image" src="https://github.com/user-attachments/assets/62abbe67-9197-4eda-a85e-5c055c678fd1" />
