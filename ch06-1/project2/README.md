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
int big(int a, int b);
```
- 큰 정수값을 반환하는 함수 big 선언

```cpp
double big(double a, double b);
```
- 큰 실수값을 반환하는 함수 big 선언

```cpp
string big(string a, string b);
```
- 사전에서 뒤에 나오는 단어를 반환하는 함수 big 선언

```cpp
int main() {
```
- 메인함수 시작

```cpp
	int x = big(10, 20);
```
- x라는 정수형 변수를 선언하고, big 함수를 호출하여 정수인 반환값을 대입

```cpp
	cout << "큰 정수값은 " << x << endl;
```
- 큰 정수값 출력

```cpp
	double y = big(3.14, 1.05);
```
- y라는 실수형 변수를 선언하고, big 함수를 호출하여 실수인 반환값을 대입

```cpp
	cout << "큰 실수값은 " << y << endl;
```
- 큰 실수값 출력

```cpp
	string z = big("hello", "world");
```
- z라는 string 객체를 선언하고, big 함수를 호출하여 string 객체인 반환값을 대입

```cpp
	cout << "사전에서 뒤에 나오는 단어는 " << z << endl;
```
- 사전에서 뒤에 나오는 단어 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료

```cpp
int big(int a, int b) {
```
- 반환값이 정수인 함수 big 정의

```cpp
	return (a > b ? a : b);
```
- a가 b보다 크면 a 반환, 그게 아니면 b 반환

```cpp
double big(double a, double b) {
```
- 반환값이 실수인 함수 big 정의

```cpp
	return (a > b ? a : b);
```
- a가 b보다 크면 a 반환, 그게 아니면 b 반환

```cpp
string big(string a, string b) {
```
- 반환값이 string 객체인 함수 big 정의

```cpp
	return (a > b ? a : b);
```
- a가 b보다 크면 a 반환, 그게 아니면 b 반환


# 실행결과
<img width="574" height="189" alt="image" src="https://github.com/user-attachments/assets/f19f3533-4d07-45e6-9ca3-a6ac1d3fb6eb" />
