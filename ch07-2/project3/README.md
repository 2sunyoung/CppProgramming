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
class Complex {
```
- Complex 클래스 선언부

```cpp
	int real, img;
```
- 각각 실수부와 허수부를 저장할 정수형 변수 real, img 선언

```cpp
public:
```
- 멤버 함수에 대한 접근 지정자를 public으로 함 (외부 접근 가능)

```cpp
	Complex(int r = 0, int i = 0) : real(r), img(i) {}
```
- 매개변수 2개를 가지는 생성자 선언( real = r, img = i로 초기화)

```cpp
	void show();
```
- show 함수 선언

```cpp
	Complex& operator+=(Complex op2);
```
- 연산자함수 operator+= 선언

```cpp
void Complex::show() {
```
- show 함수 정의

```cpp
	if (img < 0)
```
- img가 음수일 때

```cpp
		cout << real << img << "j" << endl;
```
- 복소수 결과 출력

```cpp
	else cout << real << "+" << img << "j" << endl;
```
- 그밖의 경우일 때의 복소수 결과 출력

```cpp
Complex& Complex::operator+=(Complex op2) {
```
- 연산자함수 operator+ 정의

```cpp
	this->real = this->real + op2.real;
```
- 객체 자신과 인자로 받은 객체의 실수부끼리 덧셈한 결과를 객체 자신의 실수부 변수에 저장

```cpp
	this->img = this->img + op2.img;
```
- 객체 자신과 인자로 받은 객체의 허수부끼리 덧셈한 결과를 객체 자신의 허수부 변수에 저장

```cpp
	return *this;
```
- 객체 자신을 리턴(참조 리턴)

```cpp
int main() {
```
- 메인함수 시작

```cpp
	Complex a(3, 5), b(1, 1);
```
- Complex 클래스의 객체 a, b 생성 및 초기화

```cpp
	a.show();
```
- a 객체의 show 함수 호출

```cpp
	b.show() ;
```
- b 객체의 show 함수 호출

```cpp
	b += a;
```
- 연산자함수를 호출하여 b += a 수행

```cpp
	a.show();
```
- a 객체의 show 함수 호출

```cpp
	b.show();
```
- b 객체의 show 함수 호출

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="587" height="197" alt="image" src="https://github.com/user-attachments/assets/83aa0c5f-ac59-4d7f-8086-b43e19fbccaf" />
