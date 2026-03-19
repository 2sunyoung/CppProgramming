# 소스코드 설명

```cpp
#include <iostream>
```
- 

```
using namespace std;
```
- 

```
class Sphere {
```
- 

```
	double r;
```
- 

```
public:
```
- 

```
	Sphere();
```
- 

```
	Sphere(double a);
```
- 

```
	double getVolume() { return (4.0/3.0) * 3.14 * r * r * r; }
```
- 

```
};
```
- 



```
Sphere::Sphere() : Sphere(1) {}
```
- 

```
Sphere::Sphere(double a) : r(a) {}
```
- 



```
int main() {
```
- 

```
	Sphere sph1;
```
- 

```
	cout << "구의 부피는 " << sph1.getVolume() << endl;
```
- 

```
	Sphere sph2(3);
```
- 

```
	cout << "구의 부피는 " << sph2.getVolume() << endl;
```
- 

```
	return 0;
```
- 

```
}
```
- 


# 실행결과
<img src="이미지_주소를_넣으세요" />
