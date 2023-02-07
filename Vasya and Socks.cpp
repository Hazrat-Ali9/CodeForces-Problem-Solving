// Hazart Ali
// University Of Scholars
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m,xta;
    cin>>n>>m;
    int cnt=n;
    xta=n;
    while(xta>=m)
    {
        cnt+=xta/m;
        xta=xta%m+xta/m;
    }
    cout<<cnt;
    return 0;
}
