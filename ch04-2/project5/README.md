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
- 저장할 문자열의 크기를 저장할 정수형 변수 n 선언

```cpp
	cout << "저장할 문자열의 크기를 입력하세요: ";
```
- 저장할 문자열의 크기 입력 요구 메시지 출력

```cpp
	cin >> n;
```
- 입력받은 수를 n에 저장

```cpp
	if (n <= 0) return -1;
```
- n이 0보다 작거나 같다면 -1 리턴 (오류 처리)

```cpp
	char* str = new char[n + 1];
```
- n + 1개의 문자형 배열 동적 할당 (1을 더해주는 이유는 널문자도 함께 저장하기 위해서)

```cpp
	if (!str) {
```
- str == NULL 이라면

```cpp
		cout << "메모리를 할당할 수 없습니다.";
```
- 에러 메시지 출력

```cpp
		return -1;
```
- 비정상 종료시 -1 리턴

```cpp
	cin.ignore();
```
- cin >> n 이후 버퍼에 남아있는 엔터키를 지움

```cpp
	cout << "문자열을 입력하시오: ";
```
- 문자열 입력 요구 메시지 출력

```cpp
	cin.getline(str,n+1);
```
- 공백을 포함한 문자열을 입력받아 str에 저장 (널문자도 포함하여 저장)

```cpp
	cout << "입력한 문자열은 " << str << "입니다." << endl;
```
- 입력받은 문자열 출력

```cpp
	delete[] str;
```
- 메모리 반환

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료

# 실행결과
<img width="583" height="183" alt="image" src="https://github.com/user-attachments/assets/9258bf62-ae1a-41fc-b561-f0f4dc49e864" />
