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
private:
```
- 멤버에 대한 접근 지정자는 private으로 함 (외부 접근 가)

```cpp
	double width, height;
```
- 삼각형의 폭과 높이를 저장할 실수형 멤버 변수 width, height 선언

```cpp
public:
```
- 멤버에 대한 접근 지정자는 public으로 함 (외부 접근 가능)

```cpp
	Triangle();
```
- 매개 변수가 없는 생성자 선언

```cpp
	Triangle(double w, double h);
```
- 실수형 변수 w, h를 매개 변수로 가지는 생성자 선언

```cpp
	~Triangle();
```
- 소멸자 선언

```cpp
	void setWidth(double w);
```
- 멤버 변수의 값을 설정하는 멤버 접근 함수 setWidth 선언

```cpp
	double getWidth();
```
- 멤버 변수의 값을 읽는 멤버 접근 함수 getWidth 선언

```cpp
	void setHeight(double h);
```
- 멤버 변수의 값을 설정하는 멤버 접근 함수 setHeight 선언

```cpp
	double getHeight();
```
- 멤버 변수의 값을 읽는 멤버 접근 함수 getHeight 선언

```cpp
Triangle::Triangle() : Triangle(1, 1) {}
```
- Triangle()이 타겟 생성자에게 초기화를 위임하여 width=1, height=1로 설정

```cpp
Triangle::Triangle(double w, double h) {
```
- 타겟 생성자 정의

```cpp
	width = (w <= 0) ? 1 : w;
```
- w <= 0이 참이라면 width = 1, 거짓이라면 width = w 

```cpp
	height = (h <= 0) ? 1 : h;
```
- h <= 0이 참이라면 height = 1, 거짓이라면 height = h 

```cpp
	if (w <= 0 || h <= 0) {
```
- w 또는 h가 0보다 작거나 같다면

```cpp
		cout << "길이는 양수여야함, 대신에 폭" << width << ", 높이" << height << " 삼각형 생성" << endl;
```
- 길이는 양수여야한다는 문구 출력, 폭이 width이고 높이가 height인 삼각형 생성 문구 출력

```cpp
	else cout << "폭" << width << ", 높이" << height << " 삼각형 생성" << endl;
```
- 그밖의 경우(길이가 모두 양수로, 오류가 없는 경우)에 폭이 width이고 높이가 height인 삼각형 생성 메시지 출력 

```cpp
Triangle::~Triangle() {
```
- 소멸자 정의

```cpp
	cout << "폭" << width << ", 높이" << height << " 삼각형 소멸" << endl;
```
- 폭이 width이고 높이가 height인 삼각형 소멸 메시지 출력

```cpp
void Triangle::setWidth(double w) {
```
- setWidth 함수 정의

```cpp
	if (w <= 0)
```
- w가 0보다 작거나 같으면 

```cpp
		cout << "폭은 양수이어야 함" << endl;
```
- 폭은 양수여야한다는 문구 출력 (오류 처리)

```cpp
	else width = w;
```
- 그밖의 경우에 width에 w값 대입

```cpp
double Triangle::getWidth() {
```
- getWidth 함수 정의

```cpp
	return width;
```
- width를 반환

```cpp
void Triangle::setHeight(double h) {
```
- setHeight 함수 정의

```cpp
	if (h <= 0)
```
- h가 0보다 작거나 같으면

```cpp
		cout << "높이는 양수이어야 함" << endl;
```
- 높이는 양수여야한다는 문구 출력 (오류 처리)

```cpp
	else height = h;
```
- 그밖의 경우에 height에 h값 대입

```cpp
double Triangle::getHeight() {
```
-getHeight 함수 정의 

```cpp
	return height;
```
- height를 반환

```cpp
int main() {
```
- 메인함수 시작

```cpp
	Triangle tri(-10, -5);
```
-  Triangle 클래스형 변수(객체) tri 생성, 매개 변수가 있는 생성자가 실행됨 (오류 처리가 되어 폭과 높이의 값은 모두 1로 초기화된다.)

```cpp
	tri.setWidth(-3);
```
- 멤버 접근 함수 setWidth를 호출 (오류 처리)

```cpp
	tri.setHeight(-5);
```
- 멤버 접근 함수 setHeight를 호출 (오류 처리)

```cpp
	tri.setWidth(3);
```
- 멤버 접근 함수 setWidth를 호출하여 폭을 3으로 설정해줌

```cpp
	tri.setHeight(5);
```
- 멤버 접근 함수 setHeight를 호출하여 높이를 5로 설정해줌

```cpp
	cout << "삼각형의 폭은 " << tri.getWidth() << endl;
```
- 멤버 접근 함수 getWidth를 호출하여 읽어낸 폭의 값을 출력함

```cpp
	cout << "삼각형의 높이는 " << tri.getHeight() << endl;
```
- 멤버 접근 함수 getHeight를 호출하여 읽어낸 높이의 값을 출력함

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="582" height="245" alt="image" src="https://github.com/user-attachments/assets/e807746a-ba65-4eff-895c-d28b2fdfa793" />
