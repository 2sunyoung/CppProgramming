// Title : 값들을 전달받아 저장하고 평균을 구하는 프로그램
// Author : Lee sunyoung
// Data : 26.5.14

#include <iostream>
using namespace std;
class Collector {
	int* p;
	int size = 0;
public:
	Collector(int size, int values[]) {
		this->size = size;
		p = new int[size];
		for (int i = 0;i < size;i++) {
			p[i] = values[i];
		}
	}
	Collector(const Collector& src) {
		this->size = src.size;
		p = new int[this->size];
		for (int i = 0;i < src.size;i++) {
			this->p[i] = src.p[i];
		}
	}
	~Collector() { if(p) delete[] p; }
	void show() {
		cout << "데이터 수 " << size << ": ";
		for (int i = 0; i < size;i++) {
			cout << p[i] << " ";
		}
		cout << endl;
	}
	int getSize() { return size; }
	int get(int index) { return p[index]; }
};
double calcAvg(Collector& a);
int main() {
	int temp[] = { 69,70,71,72,74 };
	Collector weight(4, temp);
	double avg = calcAvg(weight);
	weight.show();
	cout << "평균은 " << avg << endl;
	return 0;
}
double calcAvg(Collector& a) {
	double sum = 0;
	for (int i = 0;i < a.getSize();i++) 
		sum += a.get(i);
	
	return sum / a.getSize();
}
