#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,ans=0;
    string s;

    cin >> n >> s;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='1')
            ans++;
        else
            ans--;
    }
    cout << abs(ans);

    return 0;
}
