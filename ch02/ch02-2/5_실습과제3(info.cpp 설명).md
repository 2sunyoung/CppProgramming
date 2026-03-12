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
typedef struct {
```

- 학생의 정보를 담을 구조체 정의

```
int snum;
```

- 학번을 담을 정수형 변수 snum 선언

```
char name[99];
```

- 이름을 담을 문자형 배열 name 선언

```
char address[999];
```

- 주소를 담을 문자형 배열 address 선언

```
} STUDENT;
```

- 구조체 별명을 STUDENT로 함 (구조체 정의 끝)

```
int main(void) {
```

- 메인함수 시작

```
STUDENT s;
```

- 구조체 변수 s 선언

```
cout << "학번을 입력하십시오: ";
```

- 사용자로부터 학번을 입력하게 하는 메시지 출력

```
cin >> s.snum;
```

- 입력받은 값을 학번 멤버변수에 저장


```
cout << "이름을 입력하십시오: ";
```

- 사용자로부터 이름을 입력하게 하는 메시지 출력

```
cin >> s.name;
```

- 입력받은 값을 이름 멤버변수에 저장

```
cin.ignore();
```

- 입력 버퍼에 남아 있는 것 삭제

```
cout << "주소를 입력하십시오: ";
```

- 사용자로부터 주소를 입력하게 하는 메시지 출력

```
cin.getline(s.address, sizeof(s.address), '\n');
```

- 입력받은 값을 주소 멤버변수에 저장 (띄어쓰기 포함 전체 문장)

```
cout << "\n1.학번:" << s.snum << endl;
```

- 입력받은 학번 출력


```
cout << "2.이름:" << s.name << endl;
```

- 입력받은 이름 출력


```
cout << "3.주소:" << s.address;
```

- 입력받은 주소 출력

```
return 0;
```

- 0을 반환하고 메인함수 정상 종료

# 실행결과

<img width="787" height="292" alt="image" src="https://github.com/user-attachments/assets/552a2ffd-7b71-46c6-bd4a-5ae73cd9c96d" />

