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
	double s, h;
```
- 삼각형의 밑변과 높이를 저장할 실수형 멤버 변수 s, h 선언

```cpp
public:
```
- 멤버에 대한 접근 지정자는 public으로 함 (외부 접근 가능)

```cpp
	Triangle();
```
- 매개 변수가 없는 생성자 선언

```cpp
	Triangle(double a, double b);
```
- 실수형 변수 a, b를 매개 변수로 가지는 생성자 선언

```cpp
	double getArea() { return s * h * 0.5; }
```
- 삼각형의 면적을 리턴하는 멤버 함수 getArea 선언 및 정의

```cpp
Triangle::Triangle() : Triangle(1, 1) {}
```
- Triangle()이 타겟 생성자에게 초기화를 위임하여 s=1, h=1로 설정

```cpp
Triangle::Triangle(double a, double b) : s(a), h(b) {}
```
- 타겟 생성자 정의(멤버 초기화 리스트를 통해 멤버 변수 s, h를 인자값으로 초기화)



```cpp
int main() {
```
- 메인함수 시작

```cpp
	Triangle tri1;
```
- Triangle 클래스형 변수(객체) tri1 생성, 인자값이 없기 때문에 Triangle()이 실행됨 (s=1, h=1)

```cpp
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
```
- getArea 함수 호출, 결과 출력

```cpp
	Triangle tri2(2, 4);
```
- Triangle 클래스형 변수(객체) tri2 생성 (s=2, h=4)

```cpp
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
```
- getArea 함수 호출, 결과 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="585" height="173" alt="image" src="https://github.com/user-attachments/assets/39b06112-fac2-456d-ac61-45848938f7c7" />
