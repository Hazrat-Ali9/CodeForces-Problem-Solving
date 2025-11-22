#include <bits/stdc++.h>
using namespace std;

bool temp(int h, int w, int x, int y)
{
    return (x <= h and y <= w) or (y <= h and x <= w);
}

int main()
{

    int n;
    cin >> n;
    int mx = -1, my = -1;
    while (n--)
    {
        char t;
        cin >> t;
        if (t == '+')
        {
            int x, y;
            cin >> x >> y;
            if (x < y)
            {
                swap(x, y);
            }
            mx = max(mx, x);
            my = max(my, y);
        }
        else if (t == '?')
        {
            int h, w;
            cin >> h >> w;
            string ans = temp(h, w, mx, my) ? "YES" : "NO";
            cout << ans << endl;
        }
    }
    return 0;
}
