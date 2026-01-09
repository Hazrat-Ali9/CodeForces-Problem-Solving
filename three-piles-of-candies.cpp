#include <bits/stdc++.h>
using namespace std;

int main()
{

    int q;
    cin >> q;
    while (q--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        long long ans = (a + b + c) / 2;
        cout << ans << endl;
    }
    return 0;
}
