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
string GetLatterString(string s1, string s2);
```
- 사전에서 뒤에 나오는 문자열을 판별할 함수 GetLatterString 선언

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
   string res;
```
- 결과 문자열을 저장할 string 객체 res 선언

```cpp
   res = GetLatterString(s1, s2);
```
- GetLatterString 함수를 호출하여 반환된 결과 문자열을 res에 저장

```cpp
   cout << "사전에서 뒤에 나오는 문자열은 " << res << "입니다." << endl;
```
- 결과 문구 출력

```cpp
string GetLatterString(string s1, string s2) {
```
- GetLatterString 함수 정의 

```cpp
   return (s1 > s2) ? s1 : s2;
```
- s1이 s2보다 크면 s1 반환, 그게 아니면 s2 반환


# 실행결과
<img width="975" height="226" alt="image" src="https://github.com/user-attachments/assets/99b61e34-436d-4159-8b7e-54400039f4c4" />
