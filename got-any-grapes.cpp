#include <bits/stdc++.h>
using namespace std;

int main()
{


    int x, y, z;
    cin >> x >> y >> z;
    int a, b, c;
    cin >> a >> b >> c;
    bool c1 = a >= x;
    bool c2 = a - x + b >= y;
    bool c3 = a + b - x - y + c >= z;
    if (c1 and c2 and c3)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
