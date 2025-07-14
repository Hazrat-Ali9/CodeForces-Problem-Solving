#include <bits/stdc++.h>
using namespace std;

int main()
{

    int m, n;
    cin >> m >> n;
    int temp = min(m - 1, n);
    n = min(m - 1, n);
    for (int i = 1; i < m; i++)
    {
        if (m - i > n)
        {
            temp += i + 1;
            n++;
        }
        n--;
    }
    cout << temp << "\n";
    return 0;
}
