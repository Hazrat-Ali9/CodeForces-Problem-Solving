#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;

        long long int x=1;
        while(x<n)
            x*=2;
        if(x==n)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}

