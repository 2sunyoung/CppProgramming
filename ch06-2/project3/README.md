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
	Point3D(int x=0, int y=0, int z=0) : x(x), y(y), z(z) {}
```
- 전달받은 x, y, z 값으로 x, y, z를 초기화, 전달된 인자값이 없다면 0으로 초기화 (디폴트 매개변수의 사용)

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
- Point3D 클래스의 객체 p0 생성 (x=0, y=0, z=0)

```cpp
	p0.show();
```
- 객체 p0의 멤버함수 show를 호출하여 결과 출력

```cpp
	Point3D p1(1);
```
- Point3D 클래스의 객체 p1 생성 (x=1, y=0, z=0)

```cpp
	p1.show();
```
- 객체 p1의 멤버함수 show를 호출하여 결과 출력

```cpp
	Point3D p2(1, 2);
```
- Point3D 클래스의 객체 p2 생성 (x=1, y=2, z=0) 

```cpp
	p2.show();
```
- 객체 p2의 멤버함수 show를 호출하여 결과 출력

```cpp
	Point3D p3(1, 2, 3);
```
- Point3D 클래스의 객체 p3 생성 (x=1, y=2, z=3) 

```cpp
	p3.show();
```
- 객체 p3의 멤버함수 show를 호출하여 결과 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="585" height="204" alt="image" src="https://github.com/user-attachments/assets/36db4116-7781-49f3-a623-6d8ba3c83778" />
