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
	Triangle(int w, int h);
```
- 정수형 변수 w와 h를 매개 변수로 가지는 생성자 선언

```cpp
	~Triangle();
```
- 소멸자 선언

```cpp
	double getArea();
```
- 삼각형의 면적을 리턴하는 멤버 함수 getArea 선언

```cpp
Triangle::Triangle(int w, int h) : width(w), height(h) {
```
- 정수형 변수 w와 h를 매개 변수로 가지는 생성자 정의 (멤버 초기화 리스트를 통해 width = w, height = h로 초기화)

```cpp
	cout << "밑변" << width << ",높이" << height << "인 삼각형 생성" << endl;
```
- 밑변이 width이고 높이가 height인 삼각형 생성 메시지 출력

```cpp
Triangle::~Triangle() {
```
- 소멸자 정의 

```cpp
	cout << "밑변" << width << ",높이" << height << "인 삼각형 소멸" << endl;
```
- 밑변이 width이고 높이가 height인 삼각형 소멸 메시지 출력 

```cpp
double Triangle::getArea() {
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
	Triangle triArray[3] = { Triangle(2,2) , Triangle(4,4) , Triangle(6,6) };
```
- Triangle 클래스형 객체 배열 triArray 생성, 객체 3개 모두 Triangle(int w, int h)이 실행됨 (각자 전달된 인자값으로 초기화, 생성 문구 출력)

```cpp
	for (int i = 0; i < 3; i++) {
```
- 3개의 삼각형 면적을 출력하기 위한 for문 (i가 0부터 2까지 1씩 증가하며 반복)

```cpp
		cout << "삼각형" << i << "의 면적은 " << triArray[i].getArea() << endl;
```
- 배열의 각 원소에 대해 인덱스 i를 통해 객체에 접근하고, getArea 함수를 호출하여 결과 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료 


# 실행결과
<img width="572" height="299" alt="image" src="https://github.com/user-attachments/assets/2e6648ba-be86-44b9-8389-4ec5fddd0fe7" />
