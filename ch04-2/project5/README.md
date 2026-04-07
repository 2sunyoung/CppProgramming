# 소스코드 설명

```cpp
#include <iostream>
```
- 

```cpp
using namespace std;
```
- 

```cpp
int main() {
```
- 

```cpp
	int n;
```
- 

```cpp
	cout << "저장할 문자열의 크기를 입력하세요: ";
```
- 

```cpp
	cin >> n;
```
- 

```cpp
	if (n <= 0) return -1;
```
- 



```cpp
	char* str = new char[n + 1];
```
- 

```cpp
	if (!str) {
```
- 

```cpp
		cout << "메모리를 할당할 수 없습니다.";
```
- 

```cpp
		return -1;
```
- 

```cpp
	cin.ignore();
```
- 

```cpp
	cout << "문자열을 입력하시오: ";
```
- 

```cpp
	cin.getline(str,n+1);
```
- 

```cpp
	cout << "입력한 문자열은 " << str << "입니다." << endl;
```
- 

```cpp
	delete[] str;
```
- 

```cpp
	return 0;
```
- 

# 실행결과
<img width="583" height="183" alt="image" src="https://github.com/user-attachments/assets/9258bf62-ae1a-41fc-b561-f0f4dc49e864" />
