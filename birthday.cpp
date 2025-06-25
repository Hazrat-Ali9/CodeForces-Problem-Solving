#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, x, y;
    cin >> a >> b >> x >> y;
    long long ans = -1;
    if (b <= a)
    {
        long long temp = (y + x) / b;
        while (temp * b <= a)
        {
            if (temp * b - x >= y)
            {
                ans = temp;
                break;
            }
            temp++;
        }
    }
    cout << ans << endl;
    return 0;
}
