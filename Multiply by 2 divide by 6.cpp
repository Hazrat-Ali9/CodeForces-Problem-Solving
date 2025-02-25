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
        int n,cnt=0;
        cin>>n;

        while(n%6==0)
        {
            cnt++;
            n/=6;
        }

        while(n%3==0)
        {
            cnt+=2;
            n/=3;
        }

        if(n==1)
            cout << cnt << "\n";
        else
            cout << "-1\n";
    }
    return 0;
}

