#include <bits/stdc++.h>
using namespace std;

int main() {
  long long p;
  int k;
  cin >> p >> k;
  vector<long long> a(k);
  for (int i = 0; i < k; i++) {
    cin >> a[i];
  }
  long long rem = p;
  long long t = -1;
  for (int i = 0; i < k; i++) {
    if (p / a[i] > 0 and p % a[i] < rem) {
      rem = p % a[i];
      t = i;
    }
  }
  if (t != -1) {
    cout << t + 1 << " ";
    cout << p / a[t] << endl;
  } else {
    cout << "1 0" << endl;
  }
  return 0;
}
