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
        int n;
        cin>>n;

        (n/2020>=n%2020)?cout<<"YES\n":cout<<"No\n";

    }
    return 0;
}
