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
void swap(int& rx, int& ry);
```
- 값을 서로 바꾸는 함수 swap 선언 (참조에 의한 호출을 사용함)

```cpp
int main() {
```
- 메인함수 시작

```cpp
	int x, y;
```
- 정수형 변수 x, y 선언

```cpp
	cout << "정수x를 입력하시오: ";
```
- 정수 x 입력 요구 메시지 출력

```cpp
	cin >> x;
```
- 입력받은 정수를 x에 저장함

```cpp
	cout << "정수y를 입력하시오: ";
```
- 정수 y 입력 요구 메시지 출력

```cpp
	cin >> y;
```
- 입력받은 정수를 y에 저장함

```cpp
	cout << "swap함수 호출 전 x=" << x << ", y=" << y << endl;
```
- swap 함수 호출 전 x, y의 상태 출력

```cpp
	swap(x, y);
```
- swap 함수 호출

```cpp
	cout << "swap함수 호출 후 x=" << x << ", y=" << y << endl;
```
- swap 함수 호출 후 결과 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료

```cpp
void swap(int& rx, int& ry) {
```
- swap 함수 정의

```cpp
	int tmp;
```
- 정수를 임시로 저장하고 교체할 목적의 정수형 변수 tmp 선언

```cpp
	tmp = rx;
```
- tmp에 rx의 값(x) 저장

```cpp
	rx = ry;
```
- rx의 값(x)에 ry의 값(y) 저장

```cpp
	ry = tmp;
```
- ry의 값(y)에 tmp의 값 저장


# 실행결과
<img width="786" height="247" alt="image" src="https://github.com/user-attachments/assets/3cf51f27-86fc-4d37-a19f-d78eed9b05a9" />
