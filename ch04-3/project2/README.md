# 아래 코드의 문제점과 해결 방법 설명
<img width="645" height="265" alt="image" src="https://github.com/user-attachments/assets/78aade8f-08c3-424d-b329-d0d5490051ab" /><br>
이 코드는 무한 반복문이 돌아갈 때마다 새로운 메모리가 할당되고, 이전 반복에서 생성된 p는 다음 반복의 동적 할당 메모리의 주소값으로 덮어씌워지는 구조이다. <br>
즉, 이전에 할당받은 메모리 주소를 잃어버리게 되어 해제할 방법이 없어지고, 그로 인해 메모리 누수가 생기게 된다. <br>
이러한 문제점은 객체의 사용이 끝난 직후에 메모리를 즉시 반납하면 해결할 수 있다.

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
	radius = 1;
```
- 반지름 변수 radius의 값을 1로 초기화

```cpp
	cout << "생성자 실행 radius = " << radius << endl;
```
- 생성자 실행 문구 출력

```cpp
Circle::Circle(int r) {
```
- r을 매개 변수로 가지는 생성자 정의

```cpp
	radius = r;
```
- 반지름 변수 radius의 값을 전달받은 인자값 r로 초기화

```cpp
	cout << "생성자 실행 radius = " << radius << endl;
```
- 생성자 실행 문구 출력

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
	int radius;
```
- 반지름을 저장할 정수형 변수 radius 선언

```cpp
	while (true) {
```
- 무한 반복문 실행

```cpp
		cout << "반지름 입력(음수이면 종료)>> ";
```
- 반지름 입력 요구 메시지 출력

```cpp
		cin >> radius;
```
- 입력받은 값을 radius에 저장

```cpp
		if (radius < 0) break;
```
- radius가 음수이면 반복문 종료 

```cpp
		Circle* p = new Circle(radius);
```
- 동적 객체 생성 (매개 변수 하나 있는 생성자 실행)

```cpp
		cout << "원의 면적:" << p->getArea() << endl;
```
- getArea함수를 호출하여 원의 면적 출력

```cpp
		delete p;
```
- 사용이 끝난 객체는 즉시 반환함

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="574" height="299" alt="image" src="https://github.com/user-attachments/assets/12f55fa5-639b-4a77-bd72-042d81e3e752" />
