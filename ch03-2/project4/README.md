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
class Rectangle {
```
- Rectangle 클래스 선언부

```cpp
public:
```
- 멤버에 대한 접근 지정자는 public으로 함 (외부 접근 가능)

```cpp
	int x, y;
```
- 좌측상단 좌표를 저장할 정수형 멤버 변수 x, y 선언

```cpp
	int x2, y2;
```
- 우측하단 좌표를 저장할 정수형 멤버 변수 x, y 선언

```cpp
	int width, height;
```
- 가로 길이와 높이를 저장할 정수형 멤버 변수 width, height 선언

```cpp
	Rectangle();
```
- 매개 변수가 없는 생성자 선언

```cpp
	Rectangle(int a, int b);
```
- 정수형 변수 a, b를 매개 변수로 가지는 생성자 선언

```cpp
	Rectangle(int a, int b, int w, int h);
```
- 정수형 변수 a, b, w, h를 매개 변수로 가지는 생성자 선언

```cpp
	int getArea() { return width * height; }
```
- 사각형의 면적을 리턴하는 멤버 함수 getArea 선언 및 정의

```cpp
	int getPerimeter() { return 2 * (width + height); }
```
- 사각형의 둘레를 리턴하는 멤버 함수 getPerimeter 선언 및 정의

```cpp
	void getXY();
```
- 우측하단의 좌표를 구해주는 멤버 함수 getXY 선언

```cpp
	bool isSquare();
```
- 정사각형이면 true를 리턴하는 멤버 함수 isSquare 선언

```cpp
Rectangle::Rectangle() : Rectangle(1, 1, 1, 1) {}
```
- Rectangle()이 타겟 생성자에게 초기화를 위임하여 x=1, y=1, width=1, height=1로 설정

```cpp
Rectangle::Rectangle(int a, int b) : Rectangle(a, b, 1, 1) {}
```
- Rectangle(int a, int b)가 타겟 생성자에게 초기화를 위임하여 x=인자값, y=인자값, width=1, height=1로 설정

```cpp
Rectangle::Rectangle(int a, int b, int w, int h) : x(a), y(b), width(w), height(h) {}
```
- 타겟 생성자 정의(멤버 초기화 리스트를 통해 멤버 변수 x, y, width, height를 인자값으로 초기화)

```cpp
void Rectangle::getXY() {
```
- Rectangle 클래스 구현부 (멤버 함수 getXY 정의)

```cpp
	x2 = x + width;
```
- x2에 x좌표 + 가로길이 대입

```cpp
	y2 = y - height;
```
- y2에 y좌표 - 높이 대입

```cpp
bool Rectangle::isSquare() {
```
- Rectangle 클래스 구현부 (멤버 함수 isSquare 정의)

```cpp
	if (width == height) return true;
```
- 가로길이와 높이가 같다면 true를 리턴

```cpp
	else return false;
```
- 그 외의 경우에는 false를 리턴

```cpp
int main() {
```
- 메인함수 시작

```cpp
	Rectangle rect1;
```
- Rectangle 클래스형 변수(객체) rect1 생성, 인자값이 없기 때문에 Rectangle()이 실행됨 (x=1, y=1, width=1, height=1)

```cpp
	Rectangle rect2(3, 5);
```
- Rectangle 클래스형 변수(객체) rect2 생성 (x=3, y=5, width=1, height=1)

```cpp
	Rectangle rect3(3, 5, 2, 4);
```
- Rectangle 클래스형 변수(객체) rect3 생성 (x=3, y=5, width=2, height=4)

```cpp
	cout << "rect1의 면적은 " << rect1.getArea() << endl;
```
- getArea 함수 호출, 결과 출력

```cpp
	cout << "rect2의 둘레길이는 " << rect2.getPerimeter() << endl;
```
- getPerimeter 함수 호출, 결과 출력

```cpp
	rect3.getXY();
```
- getXY 함수 호출

```cpp
	cout << "rect3의 우측하단의 좌표는 (" << rect3.x2 << "," << rect3.y2 << ")" << endl;
```
- 결과 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="796" height="230" alt="image" src="https://github.com/user-attachments/assets/29d68c96-9fa9-483a-bc73-5ee7b2ad3bb9" />
