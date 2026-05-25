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
	int width, height;
```
- 각각 사각형의 폭과 높이를 저장할 정수형 멤버 변수 width, height 선언

```cpp
public:
```
- 멤버 함수에 대한 접근 지정자를 public으로 함 (외부 접근 가능)

```cpp
	Rectangle(int w = 1, int h = 1) : width(w), height(h) {}
```
- 전달받은 w, h 값으로 width, height를 초기화, 전달된 인자값이 없다면 1로 초기화 (디폴트 매개변수의 사용)

```cpp
	void show() {
```
- show 함수 정의

```cpp
		cout << "사각형 폭은 " << width << " 높이는 " << height << endl;
```
- 사각형의 폭과 높이 출력

```cpp
int main() {
```
- 메인함수 시작

```cpp
	Rectangle rect0;
```
- Rectangle 클래스의 객체 rect0 생성 (width = 1, height = 1)

```cpp
	rect0.show();
```
- 객체 rect0의 멤버함수 show를 호출하여 결과 출력

```cpp
	Rectangle rect1(10);
```
- Rectangle 클래스의 객체 rect1 생성 (width = 10, height = 1)

```cpp
	rect1.show();
```
- 객체 rect1의 멤버함수 show를 호출하여 결과 출력

```cpp
	Rectangle rect2(10, 20);
```
- Rectangle 클래스의 객체 rect2 생성 (width = 10, height = 20)

```cpp
	rect2.show();
```
- 객체 rect2의 멤버함수 show를 호출하여 결과 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="577" height="185" alt="image" src="https://github.com/user-attachments/assets/0bfc28a3-a0e4-49e2-993a-4f4abdd027b2" />
