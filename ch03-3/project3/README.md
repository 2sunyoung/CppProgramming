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
public:
```
- 멤버에 대한 접근 지정자는 public으로 함 (외부 접근 가능) 

```cpp
	double s, h;
```
- 삼각형의 밑변과 높이를 저장할 실수형 멤버 변수 s, h 선언

```cpp
	Triangle();
```
- 매개 변수가 없는 생성자 선언

```cpp
	Triangle(double a, double b);
```
- 실수형 변수 a, b를 매개 변수로 가지는 생성자 선언

```cpp
	~Triangle();
```
- 소멸자 선언

```cpp
	double getArea();
```
- 삼각형의 면적을 리턴하는 멤버 함수 getArea 선언

```cpp
Triangle::Triangle() : Triangle(1, 1) {}
```
- Triangle()이 타겟 생성자에게 초기화를 위임하여 s=1, h=1로 설정

```cpp
Triangle::Triangle(double a, double b) : s(a), h(b) {
```
- 타겟 생성자 정의 (멤버 초기화 리스트를 통해 멤버 변수 s, h를 인자값으로 초기화)

```cpp
	cout << "밑변" << s << " 높이" << h << "인 삼각형 생성" << endl;
```
- 밑변이 s이고 높이가 h인 삼각형 생성 메시지 출력 

```cpp
Triangle::~Triangle() {
```
- 소멸자 정의

```cpp
	cout << "밑변" << s << " 높이" << h << "인 삼각형 소멸" << endl;
```
- 밑변이 s이고 높이가 h인 삼각형 소멸 메시지 출력

```cpp
double Triangle::getArea() {
```
-  getArea 함수 정의

```cpp
	return s * h * 0.5;
```
- 삼각형의 면적을 리턴

```cpp
Triangle tri1(4, 8);
```
- Triangle 클래스형 전역변수(객체) tri1 생성, 매개 변수가 있는 생성자가 실행됨 (s=4, h=8, 생성 메시지 출력)

```cpp
Triangle tri2(2, 2);
```
- - Triangle 클래스형 전역변수(객체) tri2 생성, 매개 변수가 있는 생성자가 실행됨 (s=2, h=2, 생성 메시지 출력)

```cpp
int main() {
```
- 메인함수 시작

```cpp
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
```
- getArea 함수 호출, 결과 출력

```cpp
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
```
- getArea 함수 호출, 결과 출력 

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료 (이후에 tri2 -> tri1 순으로 소멸되면서 소멸 메시지가 출력된다)


# 실행결과
<img width="574" height="246" alt="image" src="https://github.com/user-attachments/assets/f3707e39-4e72-4d53-b5df-645ff8647f95" /> <br>

# 실습과제2와 실행결과가 다른 이유 설명
ㅇㅇ


