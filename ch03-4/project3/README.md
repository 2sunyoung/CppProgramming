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
private:
```
- 

```cpp
	double width, height;
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
	~Triangle();
```
- 

```cpp
	double getArea();
```
- 

```cpp
	void setWidth(double w);
```
- 

```cpp
	double getWidth();
```
- 

```cpp
	void setHeight(double h);
```
- 

```cpp
	double getHeight();
```
- 

```cpp
};
```
- 



```cpp
Triangle::Triangle() {
```
- 

```cpp
	width = 1;
```
- 

```cpp
	height = 1;
```
- 

```cpp
	cout << "폭" << width << " 높이" << height << " 삼각형 생성" << endl;
```
- 

```cpp
}
```
- 

```cpp
Triangle::~Triangle() {
```
- 

```cpp
	cout << "폭" << width << " 높이" << height << " 삼각형 소멸" << endl;
```
- 

```cpp
}
```
- 

```cpp
double Triangle::getArea() {
```
- 

```cpp
	return width * height * 0.5;
```
- 

```cpp
}
```
- 

```cpp
void Triangle::setWidth(double w) {
```
- 

```cpp
	if (w <= 0)
```
- 

```cpp
		cout << "폭은 양수이어야 함!!" << endl;
```
- 

```cpp
	else width = w;
```
- 

```cpp
}
```
- 

```cpp
double Triangle::getWidth() {
```
- 

```cpp
	return width;
```
- 

```cpp
}
```
- 

```cpp
void Triangle::setHeight(double h) {
```
- 

```cpp
	if (h <= 0)
```
- 

```cpp
		cout << "높이는 양수이어야 함!!" << endl;
```
- 

```cpp
	else height = h;
```
- 

```cpp
}
```
- 

```cpp
double Triangle::getHeight() {
```
- 

```cpp
	return height;
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
	Triangle tri;
```
- 

```cpp
	tri.setWidth(3);
```
- 

```cpp
	tri.setHeight(5);
```
- 

```cpp
	cout << "삼각형의 폭은 " << tri.getWidth() << endl;
```
- 

```cpp
	cout << "삼각형의 높이는 " << tri.getHeight() << endl;
```
- 

```cpp
	cout << "삼각형의 면적은 " << tri.getArea() << endl;
```
- 

```cpp
	return 0;
```
- 


# 실행결과
<img width="581" height="231" alt="image" src="https://github.com/user-attachments/assets/0064d9e5-3179-4d55-b29f-3ca8f14e937c" />
