# Title : *을 직각삼각형 형태로 출력하는 프로그램
# Author : Lee sunyoung
# Data : 26.3.12

#include <iostream>
using namespace std;
int main() {
   int a = 4;
   for (int i = 0; i < a; i++) { // 세로
      for (int j = 0; j < a; j++) {// 가로
         if (i>j-1)
            cout << "*";
         else cout << "  ";
      }
      cout << endl;
   }
   return 0;
}
