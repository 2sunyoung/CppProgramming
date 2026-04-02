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
	Triangle(int w, int h) : width(w), height(h) {}
```
- 정수형 변수 w와 h를 매개 변수로 가지는 생성자 선언 및 정의 (멤버 초기화 리스트를 통해 width = w, height = h로 초기화)

```cpp
	~Triangle() {}
```
- 소멸자 선언 및 정의

```cpp
	double getArea() { return width * height * 0.5; }
```
- 삼각형의 면적을 리턴하는 멤버 함수 getArea 선언 및 정의 

```cpp
int main() {
```
- 메인함수 시작

```cpp
	Triangle triArray[3] = { Triangle(2,2) , Triangle(4,4) , Triangle(6,6) };
```
- Triangle 클래스형 객체 배열 triArray 생성, 객체 3개 모두 Triangle(int w, int h)이 실행됨 (각자 전달된 인자값으로 초기화, 생성 문구 출력)

```cpp
	Triangle* tp = triArray;
```
- 객체포인터 tp 선언 및 triArray의 시작 주소로 초기화

```cpp
	for (int i = 0; i < 3; i++)
```
- 3개의 삼각형 면적을 출력하기 위한 for문 (i가 0부터 3까지 1씩 증가하며 반복)

```cpp
		cout << "삼각형" << i << "의 면적은 " << (triArray + i)->getArea() << endl;
```
- 배열명에 인덱스 i를 더하여 이웃한 주소로 이동, -> 를 이용하여 멤버함수 getArea 호출, 결과 출력 

```cpp
	cout << endl;
```
- 가독성을 위해 줄바꿈 

```cpp
	for (int i = 0; i < 3; i++)
```
- 3개의 삼각형 면적을 출력하기 위한 for문 (i가 0부터 3까지 1씩 증가하며 반복)

```cpp
		cout << "삼각형" << i << "의 면적은 " << (tp+i)->getArea() << endl;
```
- 객체 포인터 tp에 인덱스 i를 더하여 이웃한 주소로 이동, -> 를 이용하여 멤버함수 getArea 호출, 결과 출력 

```cpp
	cout << endl;
```
- 가독성을 위해 줄바꿈

```cpp
	for (int i = 0; i < 3; i++)
```
- 3개의 삼각형 면적을 출력하기 위한 for문 (i가 0부터 3까지 1씩 증가하며 반복)

```cpp
		cout << "삼각형" << i << "의 면적은 " << tp[i].getArea() << endl;
```
- tp[i]는 *(tp + i)를 배열 표현으로 나타낸 것이므로 객체로 인식되기 때문에 . 을 이용하여 멤버함수 getArea 호출, 결과 출력 

```cpp
	cout << endl;
```
- 가독성을 위해 줄바꿈

```cpp
	for (int i = 0; i < 3; i++) {
```
- 3개의 삼각형 면적을 출력하기 위한 for문 (i가 0부터 2까지 1씩 증가하며 반복)

```cpp
		cout << "삼각형" << i << "의 면적은 " << tp->getArea() << endl;
```
- 객체 포인터 tp가 현재 가리키는 주소의 객체를 -> 로 접근하여 멤버함수 getArea 호출, 결과 출력 

```cpp
		tp++;
```
- 이후 tp의 주소값을 1증가 시키는 포인터 연산을 하여 다음 객체의 주소를 가리키게 만듦

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="572" height="416" alt="image" src="https://github.com/user-attachments/assets/f4813972-b02f-45c7-84e3-f55781030b8b" />
