#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,p,q,ans1,ans2;
        cin >> x >> y >> p >> q;

        ans1 = (x+y)*p;
        ans2 = q* min(x,y) + p*abs(x-y);
        cout << min(ans1,ans2) << '\n';
    }

    return 0;
}

