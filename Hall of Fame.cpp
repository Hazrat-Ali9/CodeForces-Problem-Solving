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
        string s;
        cin>> n >> s;
        int a=-1,b=-1;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='R')
            {
                a=i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]=='L')
            {
                b=i;
                break;
            }
        }

        if(a==-1 || b==-1)
            cout<< "-1\n";
        else if(a<b)
            cout<< "0\n";
        else
        {
            for(int i=0; i<n; i++)
        {
            if(s[i]=='L' && s[i+1]=='R')
            {
                a=i+1;
                break;
            }
        }
            cout<< a << "\n";
        }
    }

    return 0;
}
