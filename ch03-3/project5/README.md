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
class Sphere {
```
- Sphere 클래스 선언부

```cpp
public:
```
- 멤버에 대한 접근 지정자는 public으로 함 (외부 접근 가능)

```cpp
	double r;
```
- 반지름을 저장할 실수형 멤버 변수 r 선

```cpp
	Sphere();
```
- 매개 변수가 없는 생성자 선언

```cpp
	Sphere(double a);
```
- 실수형 변수 a를 매개 변수로 가지는 생성자 선언

```cpp
	~Sphere();
```
- 소멸자 선언

```cpp
	double getVolume();
```
- 구의 부피를 리턴하는 멤버 함수 getVolume 선언

```cpp
Sphere::Sphere() : Sphere(1) {}
```
- Sphere()가 타겟 생성자에게 초기화를 위임하여 r=1로 설정

```cpp
Sphere::Sphere(double a) : r(a) {
```
- 타겟 생성자 정의 (멤버 초기화 리스트를 통해 멤버 변수 r을 인자값으로 초기화)

```cpp
	cout << "반지름" << r << "인 구 생성" << endl;
```
- 반지름이 r인 구 생성 메시지 출력

```cpp
Sphere::~Sphere() {
```
- 소멸자 정의

```cpp
	cout << "반지름" << r << "인 구 소멸" << endl;
```
- 반지름이 r인 구 소멸 메시지 출력

```cpp
double Sphere::getVolume() {
```
- getVolume 함수 정의

```cpp
	return (4.0) / (3.0) * 3.14 * r * r * r;
```
- 구의 부피를 리턴 

```cpp
Sphere sph1(10);
```
- Sphere 클래스형 전역변수(객체) sph1 생성, 매개 변수가 있는 생성자가 실행됨 (r=10, 생성 메시지 출력) 

```cpp
Sphere sph2(20);
```
- Sphere 클래스형 전역변수(객체) sph2 생성, 매개 변수가 있는 생성자가 실행됨 (r=20, 생성 메시지 출력) 

```cpp
int main() {
```
- 메인함수 시작

```cpp
	cout << "구의 부피는 " << sph1.getVolume() << endl;
```
- getVolume 함수 호출, 결과 출력  

```cpp
	cout << "구의 부피는 " << sph2.getVolume() << endl;
```
- getVolume 함수 호출, 결과 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료 (이후에 sph2 -> sph1 순으로 소멸되면서 소멸 메시지가 출력된다)


# 실행결과
<img width="573" height="245" alt="image" src="https://github.com/user-attachments/assets/947a251e-eb38-4019-9db2-5bfdfb027e81" />

# 실습과제4와 실행결과가 다른 이유 설명
실습과제4 에서는 sph1 지역객체 생성 -> sph1의 부피 출력 -> sph2 지역객체 생성 -> sph2의 부피 출력 순으로 실행되어 <br>
sph1의 생성메시지 출력 -> sph1의 부피 결과 메시지 -> sph2의 생성메시지 출력 -> sph2의 부피 결과 메시지 순으로 실행결과가 나타난다.<br><br>
그러나 실습과제5 에서는 sph1 전역객체 생성 -> sph2 전역객체 생성 -> sph1의 부피 출력 -> sph2의 부피 출력 순으로 실행되어 <br>
sph1의 생성메시지 출력 -> sph2의 생성메시지 출력 -> sph1의 부피 결과 메시지 -> sph2의 부피 결과 메시지 순으로 실행결과가 나타난다.<br><br>
위 코드에서 생성 메시지를 출력하는 것은 객체의 생성과 동시에 호출되는 생성자의 역할인데,<br> 
이 부분에서 지역객체와 전역객체의 생성자가 호출되는 시점의 우선순위에 차이가 있다.<br> 
즉 지역 객체는 main 함수가 시작되고 생성되면서 생성자가 호출되고,<br> 
전역 객체는 main 함수 시작 전에 초기화 작업을 할 때 생성자가 호출된다는 점에서 실습과제4와 5의 실행결과 차이가 나는 것이다.
