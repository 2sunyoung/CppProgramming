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
- 입력할 실수의 개수를 저장할 정수형 변수 n 선언

```cpp
	cout << "입력할 실수의 개수를 입력하세요: ";
```
- 입력할 실수의 개수 입력 요구 메시지 출력

```cpp
	cin >> n;
```
- 입력받은 수를 n에 저장

```cpp
	if (n <= 0) return -1;
```
- n이 0보다 작거나 같다면 -1 리턴 (오류 처리)

```cpp
	cout << n << "개의 실수를 입력 하시오." << endl;
```
- n개의 실수를 입력하라는 메시지 출력

```cpp
	double* p = new double[n];
```
- n 개의 실수 배열 동적 할당

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
	for (int i = 0; i < n; i++)
```
- 배열에 정수를 입력받기 위한 for문 (i가 0부터 n-1까지 1씩 증가하며 반복)

```cpp
		cin >> p[i];
```
- 인덱스로 접근하여 배열 안에 정수를 저장함

```cpp
	double max = p[0];
```
- 최대값을 저장할 실수형 변수 max 선언 및 배열의 첫번째 원소로 초기화

```cpp
	for (int i = 1; i < n; i++) {
```
- 최대값을 찾기 위한 for문 (i가 1부터 n-1까지 1씩 증가하며 반복) 

```cpp
		if (max < p[i])
```
- max보다 배열의 i번째 원소가 크면

```cpp
			max = p[i];
```
- max의 값 갱신

```cpp
	cout << "최대값은 " << max << "입니다." << endl;
```
- 최대값 출력

```cpp
	delete[] p;
```
- 메모리 반환

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료

# 실행결과
<img width="574" height="286" alt="image" src="https://github.com/user-attachments/assets/92941a82-6130-4612-94e9-60aebd18fdde" />
