#include <bits/stdc++.h>
using namespace std;

int main() {

  long long n, b;
  cin >> n >> b;
  long long ans = 0;
  long long i = 1;
  while (b * i <= n) {
    ans++;
    i++;
  }
  cout << ans + 1 << endl;
  return 0;
}
