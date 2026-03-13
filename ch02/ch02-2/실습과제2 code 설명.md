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
int main(void)
```

- 메인함수 시작

```
int x, y;
```

- 정수형 변수 x, y 선언

```
cout << "정수 x를 입력하시오: ";
```

- 사용자로부터 정수 x를 입력하게 하는 메시지 출력

```
cin >> x;
```

- 입력받은 값을 x에 저장

```
y = (x * x) + (2 * x) - 5;
```

- y에 이차식 대입 (x에 저장된 값으로 계산 진행)

```
cout << "x=" << x << " 일 때 y의 값은 " << y << "입니다." 
```

- 결과 문구 출력


```
return 0;
```

- 0을 반환하고 메인함수 정상 종료



# 실행결과

<img width="793" height="202" alt="image" src="https://github.com/user-attachments/assets/6b31b353-a013-412f-8bb3-0f9c854a2280" />
