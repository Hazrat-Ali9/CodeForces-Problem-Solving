#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m,xta;
    cin>>n>>m;
    int cnt=n;
    while(n>=m)
    {
        cnt+=n/m;
        n=n%m+n/m;
    }
    cout<<cnt;
    return 0;
}
