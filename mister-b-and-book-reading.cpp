#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b, c, m, l;
  cin >> a >> b >> c >> m >> l;
  int ans = 0, read = 0;
  for (int i = 0; read < a; i++) {
    read = max(0, read - l);
    read += min(c, b + i * m);
    ans++;
  }
  cout << ans << "\n";
  return 0;
}
