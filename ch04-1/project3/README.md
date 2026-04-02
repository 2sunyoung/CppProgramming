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
class Triangle {
```
- Triangle 클래스 선언부

```cpp
private:
```
- 멤버에 대한 접근 지정자를 private으로 함 (외부 접근 불가)

```cpp
	int width, height;
```
- 각각 삼각형의 폭과 높이를 저장할 정수형 멤버 변수 width, height 선언

```cpp
public:
```
- 멤버에 대한 접근 지정자를 public으로 함 (외부 접근 가능)

```cpp
	Triangle();
```
- 매개 변수가 없는 생성자 선언

```cpp
	Triangle(int width);
```
- 정수형 변수 width를 매개 변수로 가지는 생성자 선언

```cpp
	Triangle(int width, int height);
```
- 정수형 변수 width와 height를 매개 변수로 가지는 생성자 선언

```cpp
	double getArea();
```
- 삼각형의 면적을 리턴하는 멤버 함수 getArea 선언

```cpp
Triangle::Triangle() {
```
- 매개 변수가 없는 생성자 정의

```cpp
	this->width = 1;
```
- this 포인터를 사용하여 객체의 멤버변수 width에 1 대입

```cpp
	this->height = 1;
```
- this 포인터를 사용하여 객체의 멤버변수 height에 1 대입

```cpp
Triangle::Triangle(int width) {
```
- 정수형 변수 width를 매개 변수로 가지는 생성자 정의

```cpp
	this->width = width;
```
- this 포인터를 사용하여 객체의 멤버변수 width에 매개 변수 width의 값을 대입

```cpp
	this->height = 1;
```
- this 포인터를 사용하여 객체의 멤버변수 height에 1 대입 

```cpp
Triangle::Triangle(int width, int height) {
```
- 정수형 변수 width와 height를 매개 변수로 가지는 생성자 정의

```cpp
	this->width = width;
```
- this 포인터를 사용하여 객체의 멤버변수 width에 매개 변수 width의 값을 대입

```cpp
	this->height = height;
```
- this 포인터를 사용하여 객체의 멤버변수 height에 매개 변수 height의 값을 대입

```cpp
double Triangle::getArea() {
```
- getArea 함수 정의

```cpp
	return this->width * this->height * 0.5;
```
- this 포인터를 사용하여 객체의 멤버변수 width와 height에 접근하여 면적을 계산한 후 그 결과를 리턴 

```cpp
int main() {
```
- 메인함수 시작

```cpp
	Triangle tri1;
```
- Triangle 클래스형 변수(객체) tri1 생성, Triangle()이 실행됨 (width = 1, height = 1)

```cpp
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
```
- 멤버 함수 getArea를 호출하여 삼각형의 면적값을 출력

```cpp
		Triangle tri2(10);
```
- Triangle 클래스형 변수(객체) tri2 생성, Triangle(int width)이 실행됨 (width = 10, height = 1)

```cpp
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
```
- 멤버 함수 getArea를 호출하여 삼각형의 면적값을 출력

```cpp
		Triangle tri3(10, 2);
```
- Triangle 클래스형 변수(객체) tri3 생성, Triangle(int width, int height)이 실행됨 (width = 10, height = 2)

```cpp
	cout << "삼각형의 면적은 " << tri3.getArea() << endl;
```
- 멤버 함수 getArea를 호출하여 삼각형의 면적값을 출력

```cpp
		return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="577" height="188" alt="image" src="https://github.com/user-attachments/assets/54713461-c6c6-4e1c-aa48-3486e57c4ab1" />
