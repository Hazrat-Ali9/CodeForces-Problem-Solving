#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int arya = 0, bran = 0;
  int m = 0;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    if (temp + arya >= 8) {
      bran += 8;
      arya += temp - 8;
    } else {
      bran += temp + arya;
      arya = 0;
    }
    m++;
    if (bran >= k) {
      cout << m << endl;
      return 0;
    }
  }
  if (bran < k) {
    cout << -1 << endl;
  }
  return 0;
}
