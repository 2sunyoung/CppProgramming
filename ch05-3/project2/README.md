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
#include <cctype>
```
- 문자 처리 함수(toupper 등)를 사용하기 위한 헤더 파일 cctype 포함

```cpp
using namespace std;
```
- std 이름 공간에 선언된 모든 이름에 std::생략

```cpp
void Uppercase(string& s);
```
- 문자열을 대문자로 바꾸는 함수 Uppercase 선언 (참조에 의한 호출)

```cpp
int main() {
```
- 메인함수 시작

```cpp
	string s1("hello");
```
- string 객체 s1 선언, "hello"로 초기화

```cpp
	cout << "변환전 문자열 " << s1 << endl;
```
- 변환 전 문자열 출력

```cpp
	Uppercase(s1);
```
- Uppercase 함수 호출

```cpp
	cout << "변환후 문자열 " << s1 << endl;
```
- 변환 후 문자열 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료

```cpp
void Uppercase(string& s) {
```
- Uppercase 함수 정의

```cpp
	for (int i = 0; i < s.length(); i++)
```
- 문자열의 소문자를 대문자로 바꾸기 위한 for문 (i가 0부터 문자열 끝까지 1씩 증가하며 반복)

```cpp
		s[i] = toupper(s[i]);
```
- 배열(문자열)의 i번째 요소를 대문자로 바꿈 


# 실행결과
<img width="568" height="169" alt="image" src="https://github.com/user-attachments/assets/a8fb1426-1ce9-4927-b6d7-8378432370d5" />
