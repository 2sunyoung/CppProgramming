# 소스코드 설명

```cpp
#include <iostream>
```
- 

```cpp
using namespace std;
```
- 

```cpp
class Rectangle {
```
- 

```cpp
public:
```
- 

```cpp
	int x, y;
```
- 

```cpp
	int x2, y2;
```
- 

```cpp
	int width, height;
```
- 



```cpp
	Rectangle();
```
- 

```cpp
	Rectangle(int a, int b);
```
- 

```cpp
	Rectangle(int a, int b, int w, int h);
```
- 



```cpp
	int getArea() { return width * height; }
```
- 

```cpp
	int getPerimeter() { return 2 * (width + height); }
```
- 

```cpp
	void getXY();
```
- 

```cpp
	bool isSquare();
```
- 

```cpp
};
```
- 

```cpp
Rectangle::Rectangle() : Rectangle(1, 1, 1, 1) {}
```
- 

```cpp
Rectangle::Rectangle(int a, int b) : Rectangle(a, b, 1, 1) {}
```
- 

```cpp
Rectangle::Rectangle(int a, int b, int w, int h) : x(a), y(b), width(w), height(h) {}
```
- 



```cpp
void Rectangle::getXY() {
```
- 

```cpp
	x2 = x + width;
```
- 

```cpp
	y2 = y - height;
```
- 

```cpp
}
```
- 

```cpp
bool Rectangle::isSquare() {
```
- 

```cpp
	if (width == height) return true;
```
- 

```cpp
	else return false;
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
	Rectangle rect1;
```
- 

```cpp
	Rectangle rect2(3, 5);
```
- 

```cpp
	Rectangle rect3(3, 5, 2, 4);
```
- 



```cpp
	cout << "rect1의 면적은 " << rect1.getArea() << endl;
```
- 

```cpp
	cout << "rect2의 둘레길이는 " << rect2.getPerimeter() << endl;
```
- 



```cpp
	rect3.getXY();
```
- 

```cpp
	cout << "rect3의 우측하단의 좌표는 (" << rect3.x2 << "," << rect3.y2 << ")" << endl;
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
<img width="796" height="230" alt="image" src="https://github.com/user-attachments/assets/29d68c96-9fa9-483a-bc73-5ee7b2ad3bb9" />
