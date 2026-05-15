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
class Collector {
```
- Collector 클래스 선언부

```cpp
	int* p;
```
- 정수를 저장할 동적 배열에 대한 포인터 선언

```cpp
	int size = 0;
```
- 동적 배열의 크기를 저장할 정수형 변수 size 선언 및 0으로 초기화

```cpp
public:
```
- 멤버 함수에 대한 접근 지정자를 public으로 함 (외부 접근 가능)

```cpp
	Collector(int size, int values[]) {
```
- size와 values[]를 매개변수로 가지는 생성자 정의

```cpp
		this->size = size;
```
- 내 클래스의 size를 전달받은 size로 저장

```cpp
		p = new int[size];
```
- size만큼의 정수형 배열 동적할당

```cpp
		for (int i = 0;i < size;i++) {
```
- 배열의 요소들을 복사하기 위한 for문 (i가 0부터 size-1까지 1씩 증가하며 반복)

```cpp
			p[i] = values[i];
```
- values의 i번째 값을 p의 i번째에 해당하는 공간에 대입

```cpp
	Collector(const Collector& src) {
```
- 복사 생성자 정의

```cpp
		this->size = src.size;
```
- src의 size를 현재 객체의 size에 대입

```cpp
		p = new int[this->size];
```
- 복사 대상의 객체와 같은 size의 정수형 배열을 새롭게 동적 할당

```cpp
		for (int i = 0;i < src.size;i++) {
```
- 배열의 요소들을 복사하기 위한 for문 (i가 0부터 size-1까지 1씩 증가하며 반복)

```cpp
			this->p[i] = src.p[i];
```
- src의 배열의 i번째 정수를 현재 객체의 배열의 i번째 정수에 대입

```cpp
	~Collector() { if(p) delete[] p; }
```
- 소멸자 정의, p가 NULL이 아니면(=메모리를 가리키고 있으면) 메모리 정상 반납

```cpp
	void show() {
```
- 결과 출력 함수 show 정의

```cpp
		cout << "데이터 수 " << size << ": ";
```
- 데이터 수를 출력

```cpp
		for (int i = 0; i < size;i++) {
```
- 배열의 요소를 출력하기 위한 for문 (i가 0부터 size-1까지 1씩 증가하며 반복)

```cpp
			cout << p[i] << " ";
```
- p의 i번째 요소를 출력

```cpp
		cout << endl;
```
- 가독성을 위해 줄바꿈 

```cpp
	int getSize() { return size; }
```
- size를 리턴하는 함수 getSize 정의

```cpp
	int get(int index) { return p[index]; }
```
- p의 index번째 값을 리턴하는 함수 get 정의

```cpp
double calcAvg(Collector& a);
```
- 평균을 계산하는 함수 calcAvg 선언
- (메모리 절약과 효율을 위해 참조에 의한 호출 사용, 그러나 이렇게 되면 사실 복사생성자 정의가 없어도 됨(현재 코드내에서 복사생성이 수행되는 곳이 없기 때문), 그래도 이번 학습 테마가 복사생성자이기 때문에 정의는 넣겠음...)

```cpp
int main() {
```
- 메인함수 시작

```cpp
	int temp[] = { 69,70,71,72,74 };
```
- 정수형 배열 temp 선언 및 초기화

```cpp
	Collector weight(4, temp);
```
- Collector의 객체 weight 생성 및 초기화(size=4, values=temp)

```cpp
	double avg = calcAvg(weight);
```
- 평균을 저장하기 위한 실수형 변수 avg를 선언하고 calcAvg 함수를 호출하여 반환값으로 복사

```cpp
	weight.show();
```
- show 함수 호출

```cpp
	cout << "평균은 " << avg << endl;
```
- 평균 출력

```cpp
	return 0;
```
- 0을 반환하고 메인함수 정상 종료

```cpp
double calcAvg(Collector& a) {
```
- calcAvg 함수 정의

```cpp
	double sum = 0;
```
- 총합을 저장할 실수형 변수 sum 선언 및 초기화

```cpp
	for (int i = 0;i < a.getSize();i++)
```
- 총합을 계산하기 위한 for문 (i가 0부터 size-1까지 1씩 증가하며 반복)

```cpp
		sum += a.get(i);
```
- sum에 배열의 i번째 요소의 값들을 누적합함

```cpp
	return sum / a.getSize();
```
- 평균을 계산하여 리턴


# 실행결과
<img width="540" height="172" alt="image" src="https://github.com/user-attachments/assets/79d97dbd-7e86-41ad-8c9f-2da3bf3e4f70" />
