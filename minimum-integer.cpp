#include <bits/stdc++.h>
using namespace std;

int main()
{

    int q;
    cin >> q;
    while (q--)
    {
        long long l, r, d;
        cin >> l >> r >> d;
        long long ans = 1;
        if (l <= d)
        {
            ans = r / d + 1;
        }
        cout << ans * d << endl;
    }
    return 0;
}
