#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, p;
  cin >> a >> b >> c >> p;
  int temp = -1;
  for (int i = 0; temp == -1; i++) {
    int m = i * p / a;
    if (c * m >= b) {
      temp = i;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}

