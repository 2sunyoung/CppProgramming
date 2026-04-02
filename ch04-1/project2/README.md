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
- 멤버 변수에 대한 접근 지정자를 private으로 함 (외부 접근 불가)

```cpp
	int width, height;
```
- 각각 삼각형의 폭과 높이를 저장할 정수형 멤버 변수 width, height 선언

```cpp
public:
```
- 멤버 함수에 대한 접근 지정자를 public으로 함 (외부 접근 가능)

```cpp
	Triangle() : width(1), height(1) {}
```
- 매개 변수가 없는 생성자 정의 (멤버 초기화 리스트를 통해 width = 1, height = 1로 초기화)

```cpp
	void setWidth(int w) {
```
- 멤버 변수의 값을 설정하는 멤버 접근 함수 setWidth 정의

```cpp
		if (w <= 0)
```
- w가 0보다 작거나 같으면 

```cpp
			cout << "삼각형의 폭은 양수입니다" << endl;
```
- 폭은 양수여야한다는 문구 출력 (오류 처리)

```cpp
		else width = w;
```
- 그밖의 경우에 width에 w값 대입

```cpp
	void setHeight(int h) {
```
- 멤버 변수의 값을 설정하는 멤버 접근 함수 setHeight 정의

```cpp
		if (h <= 0)
```
- h가 0보다 작거나 같으면

```cpp
			cout << "삼각형의 높이는 양수입니다" << endl;
```
- 높이는 양수여야한다는 문구 출력 (오류 처리)

```cpp
		else height = h;
```
- 그밖의 경우에 height에 h값 대입

```cpp
	double getArea() {
```
- 삼각형의 면적을 리턴하는 함수 getArea 정의

```cpp
		return width * height * 0.5;
```
- 삼각형의 면적을 리턴 

```cpp
int main() {
```
- 메인함수 시작 

```cpp
	Triangle tri;
```
- Triangle 클래스형 변수(객체) tri 생성, Triangle()이 실행됨 (width = 1, height = 1)

```cpp
	Triangle* tp;
```
- 객체포인터 tp 선언

```cpp
	tp = &tri;
```
- 포인터 변수 tp에 tri 객체의 주소를 저장

```cpp
	tp->setWidth(3);
```
- tp를 이용하여 객체 tri의 setWidth 함수 호출

```cpp
	tp->setHeight(5);
```
- tp를 이용하여 객체 tri의 setHeight 함수 호출

```cpp
	cout << "삼각형의 면적은 " << tp->getArea() << endl;
```
- tp를 이용하여 객체 tri의 getArea 함수 호출, 결과 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="585" height="151" alt="image" src="https://github.com/user-attachments/assets/107181b2-911c-4878-bb24-618b19122b62" />
