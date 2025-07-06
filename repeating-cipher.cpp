#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  string ans;
  int temp = 0;
  for (int i = 0; i < n; i += temp) {
    ans += s[i];
    temp++;
  }
  cout << ans << endl;
  return 0;
}
