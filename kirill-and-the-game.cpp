#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, b, m, n, p;
  cin >> a >> b >> m >> n >> p;
  bool temp = false;
  for (long long b = m; b <= n; b++) {
    long long a = p * b;
    if (a <= a and a <= b) {
      temp = true;
      break;
    }
  }
  if (temp) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}

// kirill and the game
