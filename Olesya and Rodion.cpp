#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x,c;
    cin >> x >> c;

    if(c!=10)
        while(x--)
            cout<<c;

    else
    {
        if(x==1)
            cout<< "-1";
        else
        {
            x--;
            while(--x)
                cout<< "1";
            cout<< c;
        }
    }
    return 0;
}
