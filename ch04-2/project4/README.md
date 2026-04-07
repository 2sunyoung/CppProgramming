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
	cout << "입력할 실수의 개수를 입력하세요: ";
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
	cout << n << "개의 실수를 입력 하시오." << endl;
```
- 

```cpp
	double* p = new double[n];
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
	for (int i = 0; i < n; i++)
```
- 

```cpp
		cin >> p[i];
```
- 

```cpp
	double max = p[0];
```
- 

```cpp
	for (int i = 1; i < n; i++) {
```
- 

```cpp
		if (max < p[i])
```
- 

```cpp
			max = p[i];
```
- 

```cpp
	cout << "최대값은 " << max << "입니다." << endl;
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
<img width="574" height="286" alt="image" src="https://github.com/user-attachments/assets/92941a82-6130-4612-94e9-60aebd18fdde" />
