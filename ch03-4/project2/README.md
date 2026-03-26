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
-  Circle 클래스 선언부

```cpp
private:
```
- 멤버에 대한 접근 지정자를 private으로 함 (외부 접근 불가)

```cpp
	int radius;
```
- 반지름을 저장할 정수형 멤버 변수 radius 선언

```cpp
public:
```
- 멤버에 대한 접근 지정자를 public으로 함 (외부 접근 가능)

```cpp
	Circle();
```
- 매개 변수가 없는 생성자 선언

```cpp
	void setRadius(int r);
```
- 멤버 변수의 값을 설정하는 멤버 접근 함수 setRadius 선언

```cpp
	int getRadius();
```
- 멤버 변수의 값을 읽는 멤버 접근 함수 getRadius 선언

```cpp
Circle::Circle() { radius = 1; }
```
- 매개 변수가 없는 생성자 정의 (radius = 1로 초기화)

```cpp
void Circle::setRadius(int r) {
```
- setRadius 함수 정의

```cpp
	if (r <= 0)
```
- r이 0보다 작거나 같으면

```cpp
		cout << "반지름은 양수이어야 함!!";
```
- 반지름은 양수여야한다는 문구 출력 (오류 처리)

```cpp
	else radius = r;
```
- 그밖의 경우에 radius에 r값 대입

```cpp
int Circle::getRadius() {
```
- getRadius 함수 정의

```cpp
	return radius;
```
- radius를 반환

```cpp
int main() {
```
- 메인함수 시작 

```cpp
	Circle waffle;
```
- Circle 클래스형 변수(객체) waffle 생성, 인자값이 없기 때문에 Circle()이 실행됨 (radius = 1)

```cpp
	waffle.setRadius(5);
```
- 멤버 접근 함수 setRadius를 호출하여 반지름 값을 5로 설정해줌

```cpp
	cout << "원의 반지름은 " << waffle.getRadius() << endl;
```
- 멤버 접근 함수 getRadius를 호출하여 읽어낸 반지름 값을 출력함 

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="578" height="157" alt="image" src="https://github.com/user-attachments/assets/8ad73b77-3cd7-4670-88b3-8913249b15a1" />
