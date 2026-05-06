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
void SwapString(string* s1, string* s2);
```
- 문자열을 swap할 함수 SwapString 선언

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
   cout << "호출전 s1 : " << s1 << " s2 : " << s2 << endl;
```
- 호출 전 문구 출력

```cpp
   SwapString(&s1, &s2);
```
- SwapString 함수 호출

```cpp
   cout << "호출후 s1 : " << s1 << " s2 : " << s2 << endl;
```
- 호출 후 결과 문구 출력

```cpp
void SwapString(string* s1, string* s2) {
```
- SwapString 함수 정의

```cpp
   string tmp;
```
- 문자열을 임시로 저장하고 교체할 목적의 string 객체 tmp 선언

```cpp
   tmp = *s1;
```
- tmp에 s1의 값(문자열)을 저장

```cpp
   *s1 = *s2;
```
- s1의 값(문자열)에 s2의 값(문자열) 저장

```cpp
   *s2 = tmp;
```
- s2의 값(문자열)에 tmp의 값(문자열) 저장


# 실행결과
<img width="984" height="259" alt="image" src="https://github.com/user-attachments/assets/06bb933c-9ee9-44df-bf1e-6ea0dc9661b5" />
