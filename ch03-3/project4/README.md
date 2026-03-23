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
- 반지름을 저장할 실수형 멤버 변수 r 선언

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
int main() {
```
- 메인함수 시작

```cpp
	Sphere sph1;
```
- Sphere 클래스형 변수(객체) sph1 생성, 인자값이 없기 때문에 Sphere()이 실행됨 (r=1, 생성 메시지 출력)

```cpp
	cout << "구의 부피는 " << sph1.getVolume() << endl;
```
- getVolume 함수 호출, 결과 출력

```cpp
	Sphere sph2(3);
```
- Sphere 클래스형 변수(객체) sph2 생성, 매개 변수가 있는 생성자가 실행됨 (r=3, 생성 메시지 출력)

```cpp
	cout << "구의 부피는 " << sph2.getVolume() << endl;
```
- getVolume 함수 호출, 결과 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료 (이후에 sph2 -> sph1 순으로 소멸되면서 소멸 메시지가 출력된다)


# 실행결과
<img width="576" height="244" alt="image" src="https://github.com/user-attachments/assets/e86c420b-42e2-4a4d-96d6-572645ae52e6" />
