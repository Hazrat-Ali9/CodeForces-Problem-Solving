#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a;
  int b = 1, c = 2;
  bool ok = true;
  while (a--) {
    int w;
    cin >> w;
    if (!ok) {
      continue;
    }
    if (w == b or w == c) {
      c = 6 - b - c;
      b = w;
    } else {
      ok = false;
    }
  }
  if (ok) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}

