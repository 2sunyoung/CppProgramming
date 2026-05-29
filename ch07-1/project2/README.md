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
class Complex;
```
- forward declaration

```cpp
Complex ComplexAdd(Complex a, Complex b);
```
- 복소수의 합을 계산하는 클래스 외부 함수 ComplexAdd 선언

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
	Complex(int r=0, int i=0) : real(r), img(i) {
```
- 매개변수 2개를 가지는 생성자 선언( real = r, img = i로 초기화)

```cpp
		cout << "복소수 " << real << "+" << img << "j 생성" << endl;
```
- 복소수 생성 메시지 출력

```cpp
	void show();
```
- show 함수 선언

```cpp
	friend Complex ComplexAdd(Complex a, Complex b);
```
- ComplexAdd 라는 외부 함수를 friend로 선하여 Complex 클래스 멤버 접근 권한을 줌

```cpp
void Complex::show() {
```
- show 함수 정의

```cpp
	if (img < 0)
```
- img가 음수라면

```cpp
		cout << real << img << "j" << endl;
```
- 복소수 결과 출력

```cpp
	else cout << real << "+" << img << "j" << endl;
```
- 그밖의 경우 복소수 결과 출력

```cpp
Complex ComplexAdd(Complex a, Complex b) {
```
- ComplexAdd 함수 정의

```cpp
	Complex res;
```
- 결과 복소수 객체 res 생성

```cpp
	res.real = a.real + b.real;
```
- a와 b의 실수부끼리 덧셈한 결과를 res의 실수부 변수에 저장

```cpp
	res.img = a.img + b.img;
```
- a와 b의 허수부끼리 덧셈한 결과를 res의 허수부 변수에 저장

```cpp
	return res;
```
- res를 리턴

```cpp
int main() {
```
- 메인함수 시작

```cpp
	Complex x(2, 3), y(-5, 10), sum;
```
- Complex 클래스의 객체 x, y, sum 생성 (sum은 디폴트 매개변수 값으로 초기화됨)

```cpp
	sum = ComplexAdd(x, y);
```
- sum에 ComplexAdd의 반환값을 저장

```cpp
	cout << "두 복소수의 합은 ";
```
- "두 복소수의 합은 " 출력

```cpp
	sum.show();
```
- sum 객체의 show 함수 호출하여 결과 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="583" height="224" alt="image" src="https://github.com/user-attachments/assets/ae3257fd-186d-403e-8ac1-0e35ddd479d8" />
