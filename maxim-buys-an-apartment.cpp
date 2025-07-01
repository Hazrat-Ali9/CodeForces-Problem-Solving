#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    if (m == 0 or m == n)
    {
        cout << "0 0" << endl;
        return 0;
    }
    long long mx = (n > 3 * m) ? 2 * m : n - m;
    cout << 1 << " " << mx << endl;
    return 0;
}
