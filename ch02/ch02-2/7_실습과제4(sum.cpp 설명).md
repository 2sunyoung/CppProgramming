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
double a, sum=0;
```

- 실수형 변수 a, sum 선언 (sum은 0으로 초기화)

```
cout << "실수 5개를 입력하세요>>";
```

- 사용자로부터 실수 5개를 입력하게 하는 메시지 출력

```
for (int i = 0; i < 5; i++) {
```

- 입력을 5번 시키기 위한 for문 (i가 0부터 시작해서 5까지 1씩 증가하며 반복)

```
cin >> a;
```

- 입력받은 값을 a에 저장 (a의 값은 5번 갱신된다)

```
if (a > 0)
```

- a가 양수일 때만

```
sum += a;
```

- sum에 누적 합시킨다

```
cout << "양수 합은 " << sum << "입니다.";
```

- 결과 출력

```
return 0;
```

- 0을 반환하고 메인함수 정상 종료



# 실행결과

<img width="781" height="187" alt="image" src="https://github.com/user-attachments/assets/393b9a5f-9690-49fc-8350-ef910a8aaa9c" />
