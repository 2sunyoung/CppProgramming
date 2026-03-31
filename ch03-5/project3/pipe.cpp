// Title : 파이프에 숫자를 넣고 이동시키는 프로그램
// Author : Lee sunyoung
// Data : 26.3.30

#include <iostream>
using namespace std;
class Pipe {
private:
	int data[10];
	int index;
public:
	Pipe();
	int arrive(int n);
	int shift();
	void show();
};
Pipe::Pipe(): index(0) {
	for (int i = 0; i < 10; i++) {
		data[i] = 0;
	}
}
int Pipe::arrive(int n) {
	if (index == 10) {
		int frontNum = data[0];
		for (int i = 1; i < 10; i++) {
			data[i - 1] = data[i];
		}
		data[9] = n;
		return frontNum;
	}
	else {
		data[index] = n;
		index++;
		return -1;
	}
}
int Pipe::shift() {
	int frontNum = data[0];
	for (int i = 1; i < 10; i++) {
		data[i - 1] = data[i];
	}
	data[9] = 0;
	return frontNum;
}
void Pipe::show() {
	cout << "파이프 내부 [";
	for (int i = 0; i < 10; i++) {
		cout << data[i] << " ";
	}
	cout << "]" << endl;
}
int main() {
	Pipe pipe;
	for (int i = 0; i < 6; i++) pipe.arrive(i);
	pipe.show();
	for (int i = 6; i < 12; i++) pipe.arrive(i);
	pipe.show();
	int front = pipe.shift();
	cout << "shift()로 제거된 맨 앞 데이터 : " << front << endl;
	pipe.show();
	front = pipe.arrive(50);

	cout << "arrive(50)로 제거된 맨 앞 데이터 : " << front << endl;
	pipe.show();
	return 0;
}
