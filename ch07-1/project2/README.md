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
class Complex;
```
- 

```cpp
Complex ComplexAdd(Complex a, Complex b);
```
- 

```cpp
class Complex {
```
- 

```cpp
	int real, img;
```
- 

```cpp
public:
```
- 

```cpp
	Complex(int r=0, int i=0) : real(r), img(i) {
```
- 

```cpp
		cout << "복소수 " << real << "+" << img << "j 생성" << endl;
```
- 

```cpp
	}
```
- 

```cpp
	void show();
```
- 

```cpp
	friend Complex ComplexAdd(Complex a, Complex b);
```
- 

```cpp
};
```
- 

```cpp
void Complex::show() {
```
- 

```cpp
	if (img < 0)
```
- 

```cpp
		cout << real << img << "j" << endl;
```
- 



```cpp
	else cout << real << "+" << img << "j" << endl;
```
- 

```cpp
}
```
- 

```cpp
Complex ComplexAdd(Complex a, Complex b) {
```
- 

```cpp
	Complex res;
```
- 

```cpp
	res.real = a.real + b.real;
```
- 

```cpp
	res.img = a.img + b.img;
```
- 

```cpp
	return res;
```
- 

```cpp
}
```
- 

```cpp
int main() {
```
- 

```cpp
	Complex x(2, 3), y(-5, 10), sum;
```
- 

```cpp
	sum = ComplexAdd(x, y);
```
- 

```cpp
	cout << "두 복소수의 합은 ";
```
- 

```cpp
	sum.show();
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
<img width="583" height="224" alt="image" src="https://github.com/user-attachments/assets/ae3257fd-186d-403e-8ac1-0e35ddd479d8" />
