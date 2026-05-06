# 소스코드 설명

```cpp
#include <iostream>
```
- cin, cout 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream을 포함한다.

```cpp
#include <string>
```
- string 클래스를 사용하기 위한 헤더 파일 string 포함

```cpp
using namespace std;
```
- std 이름 공간에 선언된 모든 이름에 std::생략

```cpp
string LastString(string* arr, int len);
```
- string 객체 배열의 요소 중 사전에서 뒤에 나오는 문자열을 판별할 함수 LastString 선언 

```cpp
int main() {
```
- 메인함수 시작

```cpp
   string names[5];
```
- 길이가 5이고, 이름을 담을 string 객체 배열 names 선언 

```cpp
   for (int i = 0; i < 5; i++) {
```
- 사용자로부터 이름을 입력받아 names 배열의 각 요소에 넣기위한 for문 (i가 0부터 4까지 1씩 증가하며 반복) 

```cpp
      cout << "이름 >> ";
```
- 이름을 입력받기 위한 문구 출력

```cpp
      getline(cin, names[i], '\n');
```
- 입력받은 이름을 i번째 names 요소에 넣음

```cpp
   string res = LastString(names, 5);
```
- 결과 문자열을 담을 string 객체 res 선언, LastString 함수를 호출하고 결과 문자열 대입 

```cpp
   cout << "사전에서 가장 뒤에 나오는 문자열은 " << res << endl;
```
- 결과 문구 출력

```cpp
string LastString(string* arr, int len) {
```
- LastString 함수 정의

```cpp
   string last = *arr;
```
- 사전에서 뒤에 나오는 문자열을 담을 string 객체 last 선언, arr배열의 첫번째 요소로 초기화

```cpp
   for (int i = 0; i < len; i++) {
```
- 사전에서 뒤에 나오는 문자열을 얻기 위한 for문 (i가 0부터 len-1까지 1씩 증가하며 반복)

```cpp
      if (last < arr[i])
```
- last보다 arr[i]가 사전에서 뒤에 나오는 문자열이라면

```cpp
         last = arr[i];
```
- last에 i번째 arr의 요소 저장

```cpp
   return last;
```
- 결과 문자열인 last를 리턴


# 실행결과
<img width="969" height="361" alt="image" src="https://github.com/user-attachments/assets/40db1b23-b836-4f08-8db7-1428a894c5b0" />
