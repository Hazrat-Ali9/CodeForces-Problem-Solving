#include <bits/stdc++.h>
using namespace std;

int main() {
  int m;
  cin >> m;
  vector<int> s(m), d(m);
  for (int i = 0; i < m; i++) {
    cin >> s[i] >> d[i];
  }
  int temp = s[0];
  for (int i = 1; i < m; i++) {
    int a = 0;
    while (s[i] + a * d[i] <= temp) {
      a++;
    }
    temp = s[i] + a * d[i];
  }
  cout << temp << endl;
  return 0;
}

