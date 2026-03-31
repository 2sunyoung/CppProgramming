// Title : 체온의 저장, 출력, 평균 구하기 등을 수행하는 프로그램
// Author : Lee sunyoung
// Data : 26.3.30

#include <iostream>
using namespace std;
class Storage {
private:
	double tem[10] = { 0 };
	int idx;
public:
	Storage() :idx(0) {};
	void put(double t);
	void dump();
	double getAvg();
};
void Storage::put(double t) {
	if (idx == 10) {
		cout << "체온 값은 최대 10개까지만 저장이 가능합니다..." << endl;
	}
	else {
		tem[idx] = t;
		idx++;
	}
}
void Storage::dump() {
	for (int i = 0; i < idx; i++) 
		cout << tem[i] << " ";
}
double Storage::getAvg() {
	double total = 0;
	for (int i = 0; i < idx; i++)
		total += tem[i]; 

	return total / idx;
}
int main() {
	Storage a;
	a.put(36.7);
	a.put(36.9);
	a.put(36.4);
	a.dump();
	cout << "\n평균 체온은 " << a.getAvg() << "입니다." << endl;
	return 0;
}
