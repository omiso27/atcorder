/*.EX9 - 複合代入演算子を使おう */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int x, a, b;
  cin >> x >> a >> b;
 
  // 1.の出力
  x++;
  cout << x << endl;
 
  // ここにプログラムを追記

  //(1.で出力した値)に(a+b)を掛けた値
  x *= (a + b);
  cout << x << endl;

  //(2.で出力した値)に(2.で出力した値)を掛けた値
  x *= x;
  cout << x << endl;

  x--;
  cout << x << endl;
}