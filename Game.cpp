#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int a=0,b=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]== '1')
                a++;
            else
                b++;
        }
        if((a<b?a:b)%2==0)
            cout << "NET\n";
        else
            cout << "DA\n";
    }

    return 0;
}
