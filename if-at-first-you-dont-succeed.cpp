#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, z, n;
  cin >> x >> y >> z >> n;
  if (z > x or z > y or x + y - z + 1 > n) {
    cout << -1 << endl;
  } else {
    cout << n - (x + y - z) << endl;
  }
  return 0;
}
