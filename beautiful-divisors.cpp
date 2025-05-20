#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cin >> a;
  int temp = 1;
  int c = 1, b = 0;
  while (b <= a) {
    if (b != 0 and a % b == 0) {
      temp = b;
    }
    b = (pow(2, c) - 1) * pow(2, c - 1);
    c++;
  }
  cout << temp << endl;
  return 0;
}
