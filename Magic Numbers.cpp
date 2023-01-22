#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    for(int i=0;i<s.length();)
    {
        if(i+2<s.length() && s[i]=='1' && s[i+1]=='4' &&s[i+2]=='4')
            i+=3;
        else if(i+1<s.length() && s[i]=='1' && s[i+1]=='4')
            i+=2;
        else if (s[i]=='1')
            i++;
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}

