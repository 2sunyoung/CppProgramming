// Title : static을 이용하여 최대, 최소를 구하는 프로그램
// Author : Lee sunyoung
// Data : 26.5.20

#include <iostream>
using namespace std;
class MyMath {
public:
	static int GetMax(int* arr, int len);
	static int GetMin(int* arr, int len);
};
int MyMath::GetMax(int* arr, int len) {
	int max = *arr;
	for (int i = 1; i < len; i++) {
		if (max < *(arr + i))
			max = *(arr + i);
	}
	return max;
}
int MyMath::GetMin(int* arr, int len) {
	int min = *arr;
	for (int i = 1; i < len; i++) {
		if (min > *(arr + i))
			min = *(arr + i);
	}
	return min;
}
int main() {
	int x[5] = { 20, 30, -5, 2, -30 };
	cout << "최대값은 :" << MyMath::GetMax(x, 5) << endl;
	cout << "최소값은 :" << MyMath::GetMin(x, 5) << endl;
	return 0;
}
