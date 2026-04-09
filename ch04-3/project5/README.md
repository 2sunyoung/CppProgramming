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
class Sphere {
```
- Sphere 클래스 선언부

```cpp
private:
```
- 멤버 변수에 대한 접근 지정자를 private으로 함 (외부 접근 불가)

```cpp
	int radius;
```
- 구의 반지름을 저장할 정수형 멤버 변수 radius 선언

```cpp
public:
```
- 멤버 함수에 대한 접근 지정자를 public으로 함 (외부 접근 가능)

```cpp
	void setRadius(int r);
```
- 멤버 변수의 값을 설정하는 멤버 접근 함수 setRadius 선언

```cpp
	double getVolume();
```
- 구의 부피를 계산하여 리턴하는 함수 getVolume 선언

```cpp
void Sphere::setRadius(int r) {
```
- setRadius 함수 정의

```cpp
	if (r < 0) {
```
- r이 음수라면

```cpp
		cout << "반지름이 음수로 입력되었습니다" << endl;
```
- 반지름이 음수로 입력되었다는 오류 메시지 출력

```cpp
	else radius = r;
```
- 그밖의 경우에 radius에 r값 대입

```cpp
double Sphere::getVolume() {
```
- getVolume 함수 정의

```cpp
	return 3.14 * radius * radius * radius * 4 / 3;
```
- 구의 부피를 리턴

```cpp
int main() {
```
- 메인함수 시작

```cpp
	int n;
```
- 구의 개수를 저장할 정수형 변수 n 선언

```cpp
	int r;
```
- 구의 반지름을 저장할 정수형 변수 r 선언

```cpp
	cout << "생성하고자 하는 구의 개수: ";
```
- 구의 개수 입력 요구 메시지 출력

```cpp
	cin >> n;
```
- 입력받은 값을 n에 저장

```cpp
	Sphere* p = new Sphere[n];
```
- n개의 Sphere 배열 생성

```cpp
	for (int i = 0; i < n; i++) {
```
- 구의 반지름을 입력받고 저장하기 위한 for문 (i가 0부터 n-1까지 1씩 증가하며 반복)

```cpp
		cout << "구" << i + 1 << "의 반지름: ";
```
- i+1번째 구의 반지름 입력 요구 메시지 출력

```cpp
		cin >> r;
```
- 입력받은 값을 r에 저장

```cpp
		p[i].setRadius(r);
```
- setRadius함수를 호출하여 입력받은 반지름 값을 저장

```cpp
	for (int i = 0; i < n; i++) {
```
- 구의 부피를 출력하기 위한 for문 (i가 0부터 n-1까지 1씩 증가하며 반복)

```cpp
		cout << "구" << i + 1 << "의 부피 " << p[i].getVolume() << endl;
```
- getVolume 함수를 호출하여 구의 부피를 출력

```cpp
	delete[]p;
```
- 메모리 반환

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료


# 실행결과
<img width="573" height="265" alt="image" src="https://github.com/user-attachments/assets/5312f6b4-cd12-4ce5-a4ec-a9124653475b" />
