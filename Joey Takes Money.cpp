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
        unsigned long long int n,x,mul=1;
        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>x;
            mul*=x;
        }
        mul+=n-1;
        cout<<mul*2022<<"\n";
    }
    return 0;
}

