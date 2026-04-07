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
int main() {
```
- 메인함수 시작

```cpp
	int n;
```
- 입력할 정수의 개수를 저장할 정수형 변수 n 선언

```cpp
	double sum = 0;
```
- 배열 안 정수들의 합을 저장할 실수형 변수 sum 선언 및 초기화 

```cpp
	cout << "입력할 정수의 개수를 입력하세요: ";
```
- 입력할 정수의 개수 입력 요구 메시지 출력

```cpp
	cin >> n;
```
- 입력받은 수를 n에 저장

```cpp
	if (n <= 0) return -1;
```
- n이 0보다 작거나 같다면 -1 리턴 (오류 처리)

```cpp
	int* p = new int[n];
```
- n 개의 정수 배열 동적 할당

```cpp
	if (!p) {
```
- p == NULL 이라면

```cpp
		cout << "메모리를 할당할 수 없습니다.";
```
- 에러 메시지 출력

```cpp
		return -1;
```
- 비정상 종료시 -1 리턴

```cpp
	cout << n << "개의 정수를 입력 하시오." << endl;
```
- n개의 정수를 입력하라는 메시지 출력

```cpp
	for (int i = 0; i < n; i++) {
```
- 배열에 정수를 입력받고 그 정수들을 누적합하기 위한 for문 (i가 0부터 n-1까지 1씩 증가하며 반복)   

```cpp
		cin >> p[i];
```
- 인덱스로 접근하여 배열 안에 정수를 저장함 

```cpp
		sum += p[i];
```
- 저장된 정수 값들을 누적합하여 sum에 저장

```cpp
	cout << "평균값은 " << sum / n << "입니다." << endl;
```
- 평균값 출력

```cpp
	delete[] p;
```
- 메모리 반환

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료

# 실행결과
<img width="580" height="300" alt="image" src="https://github.com/user-attachments/assets/7fc39c05-fd58-4b0c-a7ef-c872b6409bf4" />
