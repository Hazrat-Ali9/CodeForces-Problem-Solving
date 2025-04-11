#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, m;
  cin >> n >> m;
  if (m >= n) {
    cout << n << endl;
  } else {
    
    long double d = 1 + 8 * (n - m);
    long double days = (-1 + sqrt(d)) / 2;
    
    long long ans = ceil(days) + m;
    cout << ans << endl;
  }
}
