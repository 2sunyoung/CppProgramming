# 아래 코드의 문제점과 해결 방법 설명
<img width="1002" height="382" alt="image" src="https://github.com/user-attachments/assets/d5f4a606-7cb7-4a20-8c41-84009745f8be" /> <br>
이 코드는 포인터를 증가시켜 원래 동적 배열의 시작 주소를 잃어버려 잘못된 메모리 해제가 발생하는 문제가 있다.<br>
이러한 문제점은 인덱스로 접근하거나 별도의 포인터를 사용하여 해결하면 된다.

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
- 반지름을 저장할 정수형 멤버 변수 radius 선언 (private로 선언)

```cpp
public:
```
- 멤버에 대한 접근 지정자를 public으로 함 (외부 접근 가능)

```cpp
	Circle();
```
- 매개 변수가 없는 생성자 선언

```cpp
	Circle(int r);
```
- r을 매개 변수로 가지는 생성자 선언

```cpp
	~Circle();
```
- 소멸자 선언

```cpp
	void setRadius(int r) { radius = r; }
```
- 멤버 변수의 값을 설정하는 멤버 접근 함수 setRadius 선언 및 정의

```cpp
	double getArea() { return 3.14 * radius * radius; }
```
- 원의 면적을 리턴하는 멤버 함수 getArea 선언

```cpp
Circle::Circle() {
```
- 매개 변수가 없는 생성자 정의

```cpp
	radius = 1; cout << "생성자 실행 radius = " << radius << endl;
```
- 반지름 변수 radius의 값을 1로 초기화, 생성자 실행 문구 출력

```cpp
Circle::Circle(int r) {
```
- r을 매개 변수로 가지는 생성자 정의

```cpp
	radius = r; cout << "생성자 실행 radius = " << radius << endl;
```
- 반지름 변수 radius의 값을 전달받은 인자값 r로 초기화, 생성자 실행 문구 출력

```cpp
Circle::~Circle() {
```
- 소멸자 정의

```cpp
	cout << "소멸자 실행 radius = " << radius << endl;
```
- 소멸자 실행 문구 출력

```cpp
int main() {
```
- 메인함수 시작

```cpp
	Circle* pArray = new Circle[3];
```
- 3개의 Circle 배열 생성

```cpp
	for (int i = 0; i < 3; i++) {
```
- 원의 면적을 출력하기 위한 for문 (i가 0부터 2까지 1씩 증가하며 반복)

```cpp
		cout << pArray[i].getArea() << '\n';
```
- getArea를 호출하여 원의 면적을 출력

```cpp
	delete[] pArray;
```
- 메모리 반환

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="572" height="300" alt="image" src="https://github.com/user-attachments/assets/e73458c8-b9ee-497a-8291-cef4f6452fdc" />
