#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int temp;
    for (int i = 1; i <= a; i++)
    {
        bool ok = (i + 1) <= b and (i + 2) <= c;
        if (ok)
        {
            temp = 3 * i + 3;
        }
    }
    cout << temp << endl;
    return 0;
}
