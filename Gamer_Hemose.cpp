#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    for (cin >> t; t; t -= 1)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
        sort(a.begin(), a.end(), greater<int>());
        int ans = m / (a[0] + a[1]) * 2;
        m %= (a[0] + a[1]);
        for (int i = 0; i < n; i += 1)
            if (m > 0)
            {
                m -= a[i];
                ans += 1;
            }
        cout << ans << "\n";
    }
    return 0;
}
