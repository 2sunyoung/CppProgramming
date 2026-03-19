# 소스코드 설명

```
#include <iostream>
```

- cin, cout 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream을 포함한다.

```
using namespace std;
```

- std 이름 공간에 선언된 모든 이름에 std::생략

```
class Sphere
```

- Sphere 클래스 선언부

```
public:
```

- 멤버에 대한 접근 지정자는 public으로 함 (외부 접근 가능)

```
double r;
```

- 반지름의 길이를 저장할 실수형 멤버 변수 r 선언

```
double getVolume();
```

- 구의 부피를 리턴하는 멤버 함수 getVolume 선언

```
double getArea();
```

- 구의 표면적을 리턴하는 멤버 함수 getArea 선언

```
double Sphere::getVolume()
```

- Sphere 클래스 구현부 (멤버 함수 getVolume 정의)

```
return (4.0 / 3.0) * 3.14 * r * r * r;
```

- 구의 부피를 리턴

```
double Sphere::getArea()
```

- Sphere 클래스 구현부 (멤버 함수 getArea 정의)

```
return 4 * 3.14 * r * r;
```

- 구의 표면적을 리턴

```
int main()
```

- 메인함수 시작

```
Sphere s;
```

- Sphere 클래스형 변수(객체) s 생성

```
s.r = 6.3;
```

- 객체 s의 r(반지름)에 6.3을 대입

```
cout << "구의 부피는 " << s.getVolume() << endl;
```

- getVolume 함수 호출, 결과 출력

```
cout << "구의 표면적은 " << s.getArea();
```

- getArea 함수 호출, 결과 출력

```
return 0;
```

- 0을 반환하고 메인함수 정상 종료

# 실행결과

<img width="573" height="142" alt="Image" src="https://github.com/user-attachments/assets/2c2f019f-4639-455b-a023-322669a5b418" />
