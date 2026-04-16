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
int main() {
```
- 메인함수 시작

```cpp
	string s, ss;
```
- 입력받은 문자열을 저장할 string 객체 s와 이어붙인 문자열을 저장할 string 객체 ss를 선언

```cpp
	int num = 1;
```
- 입력한 순서를 저장할 정수형 변수 num을 선언 및 1로 초기화 

```cpp
	while (true) {
```
- 문자열을 입력받고 출력하기 위한 무한 반복문 실행

```cpp
		cout << "문자열 입력: ";
```
- 문자열 입력 요구 메시지 출력

```cpp
		getline(cin, s, '\n');
```
- getline 함수를 이용하여 입력받은 문자열을 s에 저장

```cpp
		if (s == "quit") break;
```
- s가 quit이라면 반복문 종료

```cpp
		ss += '<' + to_string(num) + '>' + s;
```
- <순서 번호> + 문자열을 누적합하여 이은 문자열을 ss에 저장

```cpp
		cout << "이어진 문자열: " << ss << endl;
```
- 이어진 문자열 출력

```cpp
		num++;
```
- num을 1 증가시킴

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="573" height="263" alt="image" src="https://github.com/user-attachments/assets/37573a45-19e4-43b7-8c91-820d8d372913" />
