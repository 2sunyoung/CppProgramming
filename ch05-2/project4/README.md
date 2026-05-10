# 소스코드 설명

```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream을 포함한다.

```cpp
using namespace std;
```
- string 클래스를 사용하기 위한 헤더 파일 string 포함

```cpp
void get_parts(double a, int& ri, double& rd);
```
- 실수의 정수부와 소수부를 나누는 함수 get_parts 선언 (참조에 의한 호출을 사용함)

```cpp
int main() {
```
- 메인함수 시작

```cpp
	double a;
```
- 실수형 변수 a 선언

```cpp
	int i;
```
- 정수형 변수 i 선언

```cpp
	double d;
```
- 실수형 변수 d 선언

```cpp
	cout << "실수를 입력하시오: ";
```
- 실수 입력 요구 메시지 출력

```cpp
	cin >> a;
```
- 입력받은 실수를 a에 저장

```cpp
	get_parts(a, i, d);
```
- get_parts 함수 호출

```cpp
	cout << "정수부: " << i << endl;
```
- 정수부 결과 출력

```cpp
	cout << "소수부: " << d << endl;
```
- 소수부 결과 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료

```cpp
void get_parts(double a, int& ri, double& rd) {
```
- get_parts 함수 정의 

```cpp
	ri = (int)a;
```
- ri에 실수인 a를 정수로 형변환한 값을 저장 (정수부 얻기)

```cpp
	rd = a - ri;
```
- rd에 a - ri의 값을 저장 (소수부 얻기)


# 실행결과
<img width="785" height="233" alt="image" src="https://github.com/user-attachments/assets/61c2ebed-5c5c-47b3-b49c-6daf6ca5a962" />
