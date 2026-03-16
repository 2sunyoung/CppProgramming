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
class Rectangle
```

- Rectangle 클래스 선언부

```
public:
```

- 멤버에 대한 접근 지정자는 public으로 함 (외부 접근 가능)

```
int width;
```

- 가로 길이를 저장할 정수형 멤버 변수 width 선언

```
int height;
```

- 높이를 저장할 정수형 멤버 변수 height 선언

```
int x ,x2;
```

- 좌표를 저장할 정수형 멤버 변수 (좌측상단 x좌표, 우측하단 x좌표) 선언

```
int y, y2;
```

- 좌표를 저장할 정수형 멤버 변수 (좌측상단 y좌표, 우측하단 y좌표) 선언

```
int getArea();
```

- 사각형의 면적을 리턴하는 멤버 함수 getArea 선언

```
int getPerimeter();
```

- 사각형의 둘레를 리턴하는 멤버 함수 getPerimeter 선언

```
void getXY();
```

- 우측하단의 좌표를 구해주는 멤버 함수 getXY 선언

```
void getRectinfo();
```

-  키보드로 부터 데이터를 입력받아서 멤버 변수에 대입해주는 멤버 함수 getRectinfo 선언

```
int Rectangle::getArea()
```

- Rectangle 클래스 구현부 (멤버 함수 getArea 정의)

```
return width * height;
```

- 사각형의 면적을 리턴

```
int Rectangle::getPerimeter()
```

- Rectangle 클래스 구현부 (멤버 함수 getPerimeter 정의)

```
return 2 * (width + height);
```

- 사각형의 둘레를 리턴

```
void Rectangle::getXY()
```

- Rectangle 클래스 구현부 (멤버 함수 getXY 정의)

```
x2 = x + width;
```

- x2에 x좌표 + 가로길이 대입

```
y2 = y - height;
```

- y2에 y좌표 - 높이 대입

```
void Rectangle::getRectinfo()
```

- Rectangle 클래스 구현부 (멤버 함수 getRectinfo 정의)

```
cout << "사각형의 좌측상단좌표(x,y): ";
```

- 사용자로부터 사각형의 좌측상단좌표를 입력하게 하는 문구 출력

```
cin >> x >> y;
```

- 입력받은 값을 x, y 각각에 대입

```
cout << "사각형의 폭과 높이(width,height): ";
```

- 사용자로부터 사각형의 폭과 높이를 입력하게 하는 문구 출력

```
cin >> width >> height;
```

- 입력받은 값을 width, height 각각에 대입


```
int main()
```

- 메인함수 시작

```
Rectangle r;
```

- Rectangle 클래스형 변수(객체) r 생성

```
r.getRectinfo();
```

- getRectinfo 함수 호출

```
cout << "사각형의 면적은 " << r.getArea() << endl;
```

- getArea 함수 호출, 결과 출력

```
cout << "사각형의 둘레길이는 " << r.getPerimeter() << endl;
```

- getPerimeter 함수 호출, 결과 출력

```
r.getXY();
```

- getXY 함수 호출 

```
cout << "사각형의 우측하단의 좌표는 (" << r.x2 << "," << r.y2 << ")";
```

- 결과 출력

```
return 0;
```

- 0을 반환하고 메인함수 정상 종료


# 실행결과

<img width="564" height="208" alt="Image" src="https://github.com/user-attachments/assets/9dd2286c-60d4-4848-b2f7-592ddb05851c" />
