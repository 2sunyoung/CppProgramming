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
	double sum = 0;
```
- 

```cpp
	cout << "입력할 정수의 개수를 입력하세요: ";
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
	int* p = new int[n];
```
- 

```cpp
	if (!p) {
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
	cout << n << "개의 정수를 입력 하시오." << endl;
```
- 

```cpp
	for (int i = 0; i < n; i++) {
```
- 

```cpp
		cin >> p[i];
```
- 

```cpp
		sum += p[i];
```
-  

```cpp
	cout << "평균값은 " << sum / n << "입니다." << endl;
```
- 

```cpp
	delete[] p;
```
- 

```cpp
	return 0;
```
- 

# 실행결과
<img width="580" height="300" alt="image" src="https://github.com/user-attachments/assets/7fc39c05-fd58-4b0c-a7ef-c872b6409bf4" />
