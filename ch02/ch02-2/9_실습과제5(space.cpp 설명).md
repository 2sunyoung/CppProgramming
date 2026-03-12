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
char text[100];
```

- 문자형 배열 text 선언

```
cout << "빈칸 없이 문자열을 입력하세요>>";
```

- 사용자로부터 빈칸 없이 문자열을 입력하게 하는 메시지 출력

```
cin >> text;
```

- 입력받은 값을 text에 저장

```
char* p = text;
```

- 문자형 포인터 변수 p 선언 및 초기화 (text 배열의 첫번째 주소를 가리킴)

```
while (*p != '\0') {
```

- p가 가리키는 값이 널문자를 만나면 종료하는 무한 반복문

```
cout << *p << ' ';
```

- p가 가리키는 주소의 값을 하나 출력할 때마다 뒤에 공백도 함께 출력

```
p++;
```

- 포인터 p를 바로 옆주소로 이동시킨다

```
return 0;
```

- 0을 반환하고 메인함수 정상 종료



# 실행결과

<img width="793" height="181" alt="image" src="https://github.com/user-attachments/assets/c3876063-c2da-48a8-a113-45f1cd2d154f" />
