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
int a=7;
```

- 정수형 변수 a를 선언하고 7로 초기화

```
for (int i = 0; i < a; i++) {
```

- 세로줄에 해당하는 for문 (i가 0부터 시작해서 a까지 1씩 증가하며 반복)

```
for (int j = 0; j < a; j++) {
```

- 가로줄에 해당하는 for문 (j가 0부터 시작해서 a까지 1씩 증가하며 반복)

```
if (i == j || j == a - i-1)
```

- i가 j와 같거나 j가 a - i-1과 같다면

```
cout << "* ";
```

- *을 출력 (모양을 예쁘게 하기 위해 *뒤에 공백 추가)


```
else cout << "  ";
```

- 그외의 상황에선 모두 공백을 출력


```
cout << endl;
```

- 가로줄에 해당하는 반복문이 끝나면 줄바꿈을 실행


```
return 0;
```

- 0을 반환하고 메인함수 정상 종료



# 실행결과

<img width="790" height="313" alt="image" src="https://github.com/user-attachments/assets/7247f658-c37f-44a6-8c65-769d3004ca37" />
