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
class Circle {
```
- Circle 클래스 선언부

```cpp
	int radius;
```
- 반지름을 저장할 정수형 변수 radius 선언

```cpp
public:
```
- 멤버에 대한 접근 지정자는 public으로 함 (외부 접근 가능)

```cpp
	Circle(int r): radius(r) {}
```
- 반지름 r이 매개변수인 생성자 정의 (멤버 초기화 리스트를 통해 radius = r로 초기화)

```cpp
	Circle& plus(int p) {
```
- 반지름을 p만큼 증가시키고 자기 객체 자신을 참조 리턴하는 함수 plus 정의

```cpp
		radius += p;
```
- radius에 p만큼 더하고 그값을 저장

```cpp
		return *this;
```
- this 포인터(객체 자기 자신을 가리키는 포인터)의 값을 참조하여 리턴 (자기 자신(객체)을 반환하는 것)

```cpp
	Circle& minus(int m) {
```
- 반지름을 m만큼 감소시키고 자기 객체 자신을 참조 리턴하는 함수 minus 정의

```cpp
		radius -= m;
```
- radius에 m만큼 빼고 그값을 저장

```cpp
		return *this;
```
- this 포인터(객체 자기 자신을 가리키는 포인터)의 값을 참조하여 리턴 (자기 자신(객체)을 반환하는 것)

```cpp
	int getRadius() { return radius; }
```
- radius를 리턴하기 위한 멤버 접근 함수 getRadius 정의

```cpp
int main() {
```
- 메인함수 시작

```cpp
	Circle a(5);
```
- Circle 클래스의 객체 a 생성 (반지름 5로 초기화)

```cpp
	a.plus(1).plus(2).plus(3).minus(3).minus(2).minus(1).minus(5);
```
- plus와 minus함수를 호출하여 a 객체의 반지름 5에서 1,2,3을 차례로 더하고 3,2,1,5를 차례로 뺌

```cpp
	cout << "객체 a의 반지름은 " << a.getRadius();
```
- 결과 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="587" height="137" alt="image" src="https://github.com/user-attachments/assets/fd1dd7fe-2ce7-4115-ab20-5e6db25263bd" />
