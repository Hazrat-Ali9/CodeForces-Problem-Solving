#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n, k;
    cin >> n >> k;
    long long l = 0, h = n;
    while (l < h)
    {
        long long m = (l + h) / 2;
        long long temp = m * (m + 1) / 2;
        if (temp + m < k + n)
        {
            l = m + 1;
        }
        else
        {
            h = m;
        }
    }
    cout << n - l << endl;
    return 0;
}
