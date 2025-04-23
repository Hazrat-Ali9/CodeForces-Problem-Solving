#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, m, n, p, q;
  cin >> h >> m >> n >> p >> q;
  int a = 2 * p + m * h;
  int b = 2 * q + n * h;
  if (a == b) {
    cout << "Friendship" << endl;
  } else if (a < b) {
    cout << "First" << endl;
  } else {
    cout << "Second" << endl;
  }
  return 0;
}


