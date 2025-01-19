#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    if(n>=0)
        cout<<n;
    else
    {
        int x=n/10;
        int y=n/100*10+n%10;
        cout<<max(x,y);
    }
    return 0;
}

