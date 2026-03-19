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
class Triangle {
```
- 

```cpp
	double s, h;
```
- 

```cpp
public:
```
- 

```cpp
	Triangle();
```
- 

```cpp
	Triangle(double a, double b);
```
- 

```cpp
	double getArea() { return s * h * 0.5; }
```
- 

```cpp
};
```
- 

```cpp
Triangle::Triangle() : Triangle(1, 1) {}
```
- 

```cpp
Triangle::Triangle(double a, double b) : s(a), h(b) {}
```
- 



```cpp
int main() {
```
- 

```cpp
	Triangle tri1;
```
- 

```cpp
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
```
- 

```cpp
	Triangle tri2(2, 4);
```
- 

```cpp
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
```
- 

```cpp
	return 0;
```
- 

```cpp
}
```
- 


# 실행결과
<img width="585" height="173" alt="image" src="https://github.com/user-attachments/assets/39b06112-fac2-456d-ac61-45848938f7c7" />
