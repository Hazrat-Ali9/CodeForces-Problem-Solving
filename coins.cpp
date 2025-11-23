#include <bits/stdc++.h>
using namespace std;
// Coin 
int main() {
  long long n, s;
  cin >> n >> s;
  long long ans = s / n;
  if (s % n > 0) {
    ans++;
  }
  cout << ans << endl;
  return 0;
}
