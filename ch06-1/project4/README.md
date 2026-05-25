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
class Point3D {
```
- Point3D 클래스 선언부

```cpp
	int x, y, z;
```
- 3차원의 좌표를 담을 정수형 변수 x, y, z 선언

```cpp
public:
```
- 멤버 함수에 대한 접근 지정자를 public으로 함 (외부 접근 가능)

```cpp
	Point3D() : Point3D(0, 0, 0) {}
```
- Point3D()이 타겟 생성자에게 초기화를 위임하여 x=0, y=0, z=0로 설정

```cpp
	Point3D(int x) : Point3D(x, 0, 0) {}
```
- 전달받은 x 값으로 x를 초기화하고 y, z는 0로 설정

```cpp
	Point3D(int x, int y) : Point3D(x, y, 0) {}
```
- 전달받은 x, y 값으로 x, y를 초기화하고 z는 0로 설정

```cpp
	Point3D(int x, int y, int z) : x(x), y(y),z(z) {}
```
- 전달받은 x, y, z 값으로 x, y, z를 초기화

```cpp
	void show() {
```
- show 함수 정의

```cpp
		cout << "3차원 점의 좌표는 (" << x << "," << y << "," << z << ")" << endl;
```
- 3차원 점의 좌표 출력

```cpp
int main() {
```
- 메인함수 시작

```cpp
	Point3D p0;
```
- Point3D 클래스의 객체 p0 생성 (매개변수가 없는 생성자 호출)

```cpp
	p0.show();
```
- 객체 p0의 멤버함수 show를 호출하여 결과 출력

```cpp
	Point3D p1(1);
```
- Point3D 클래스의 객체 p1 생성 (매개변수가 하나인 생성자 호출)

```cpp
	p1.show();
```
- 객체 p1의 멤버함수 show를 호출하여 결과 출력

```cpp
	Point3D p2(1, 2);
```
- Point3D 클래스의 객체 p2 생성 (매개변수가 두개인 생성자 호출)

```cpp
	p2.show();
```
- 객체 p2의 멤버함수 show를 호출하여 결과 출력

```cpp
	Point3D p3(1, 2, 3);
```
- Point3D 클래스의 객체 p3 생성 (매개변수가 세개인 생성자 호출)

```cpp
	p3.show();
```
- 객체 p3의 멤버함수 show를 호출하여 결과 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="581" height="209" alt="image" src="https://github.com/user-attachments/assets/e8eacefb-0436-4d9b-87be-ab9eb2d9fa9c" />
