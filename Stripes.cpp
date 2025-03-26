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
        string A[8];
        bool f=false;
        for(int i=0;i<8;i++)
        {
            cin >> A[i];
            if(A[i]=="RRRRRRRR")
                f=true;
        }
        if(f)
            cout << "R\n";
        else
            cout << "B\n";
    }
    return 0;
}

