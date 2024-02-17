
#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf

int main (void)
{
    int a,b;

    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
            cout << "NO" << endl;
        else
        {
            if (abs(a-b) == 1 || a == b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
