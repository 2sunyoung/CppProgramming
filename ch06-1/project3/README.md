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
	Rectangle() : Rectangle(1, 1) {}
```
- Rectangle()이 타겟 생성자에게 초기화를 위임하여 width=1, height=1로 설정

```cpp
	Rectangle(int w) :width(w), height(1) {}
```
- Rectangle()이 타겟 생성자에게 초기화를 위임하여 width=1, height=1로 설정

```cpp
	Rectangle(int w, int h) :width(w), height(h) {}
```
- 전달받은 w 값으로 width를 초기화하고 height는 1로 설정

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
- Rectangle 클래스의 객체 rect0 생성 (매개변수가 없는 생성자 호출)

```cpp
	rect0.show();
```
- 객체 rect0의 멤버함수 show를 호출하여 결과 출력

```cpp
	Rectangle rect1(10);
```
- Rectangle 클래스의 객체 rect1 생성 (매개변수가 하나인 생성자 호출)

```cpp
	rect1.show();
```
- 객체 rect1의 멤버함수 show를 호출하여 결과 출력

```cpp
	Rectangle rect2(10, 20);
```
- Rectangle 클래스의 객체 rect2 생성 (매개변수가 두개인 생성자 호출)

```cpp
	rect2.show();
```
- 객체 rect2의 멤버함수 show를 호출하여 결과 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="574" height="190" alt="image" src="https://github.com/user-attachments/assets/17b30a1f-ce9f-485f-bb22-85a516606cac" />
