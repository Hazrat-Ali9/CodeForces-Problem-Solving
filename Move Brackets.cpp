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
        int a,cnt=0,ans=0;
        string s;
        cin >> a >> s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
                cnt++;
            else
                cnt--;
            ans = min(cnt,ans);
        }
        cout<< -ans << "\n";
    }
    return 0;
}

