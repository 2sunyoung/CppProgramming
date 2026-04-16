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
	string s;
```
- 입력받은 문자열을 저장할 string 객체 s 선언

```cpp
	int cnt=0;
```
- 카운트 변수 cnt 선언

```cpp
	cout << "문자열 입력: ";
```
- 문자열 입력 요구 메시지 출력

```cpp
	getline(cin, s, '\n');
```
- getline 함수를 이용하여 입력받은 문자열을 s에 저장

```cpp
	for (int i = 0; i < s.length(); i++) {
```
- 문자열에서 'a'를 찾으면 카운트 변수를 증가시키는 for문 (i가 0부터 문자열 길이-1까지 1씩 증가하며 반복)

```cpp
		if (s.at(i) == 'a')
```
- s의 i번째 인덱스의 값이 'a'라면

```cpp
			cnt++;
```
- cnt 1 증가

```cpp
	cout << "문자 a는 " << cnt << "개 있습니다.";
```
- 결과 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="574" height="151" alt="image" src="https://github.com/user-attachments/assets/66262a7e-d9c2-497f-b7da-dea189a80e54" />
