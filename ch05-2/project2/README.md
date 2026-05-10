## 실습과제2의 프로그램 비정상 동작 이유
실습과제2는 값에 의한 호출을 이용한 코드이다. <br>
값에 의한 호출은 인자값이 매개변수에 복사되므로 함수 내부에서 값을 변경해도 복사된 지역변수만 바뀌고 원래 변수에는 영향을 주지 않는다.<br>
따라서 결과가 2만큼 증가하지 않고 원래 값 그대로 출력되는 것이다.<br>

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
void add2(int& value);
```
- 값을 2만큼 증가시키는 함수 add2 선언 (참조에 의한 호출을 사용함)

```cpp
int main(void)
```
- 메인함수 시작

```cpp
	int number;
```
- 2를 증가시킬 정수를 저장할 정수형 변수 number 선언

```cpp
	cout << "정수를 입력하세요 : ";
```
- 정수 입력 요구 메시지 출력

```cpp
	cin >> number;
```
- 입력받은 정수를 number에 저장

```cpp
	add2(number);
```
- add2 함수 호출

```cpp
	cout << "2만큼 증가한 값 :" << number << endl;
```
- 결과 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료

```cpp
void add2(int& value)
```
- add2 함수 정의

```cpp
	value += 2;
```
- value 를 2 증가시킴 (결과적으로 인자값이 2증가됨)


# 실행결과
<img width="782" height="203" alt="image" src="https://github.com/user-attachments/assets/6e90bade-250a-421d-ad03-bd5f2f764569" />
