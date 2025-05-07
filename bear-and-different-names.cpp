#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b;
  cin >> a >> b;
  vector<string> s(a - b + 1);
  for (int i = 0; i < s.size(); i++) {
    cin >> s[i];
  }
  vector<string> temp(n);
  for (int i = 0; i < n; i++) {
    temp[i] = 'A' + (i % 26);
    for (int j = 0; j < i / 26; j++) {
      temp[i] += 'a';
    }
  }
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == "NO") {
      temp[i + k - 1] = temp[i];
    }
  }
  for (auto name: temp) {
    cout << name << " ";
  }
  cout << endl;
  return 0;
}
