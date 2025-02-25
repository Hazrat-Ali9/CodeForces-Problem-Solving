#include<bits/stdc++.h>
using namespace std;
// mULTIPLE tABLE
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x,y;
    cin >> x >> y;
    int cnt=0;
    for(int i=1; i<=x; i++)
    {
        if(y%i==0 && y / i <= x)
            cnt++;
    }
    cout << cnt << '\n';

    return 0;
}

