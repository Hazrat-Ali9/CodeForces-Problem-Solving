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
        int n,k=1;
        cin>>n;
        while(k++)
        {
            if(n % ((int)pow(2,k)-1) == 0)
            {
                cout<< n/((int)pow(2,k)-1) << "\n";
                break;
            }
        }
    }
    return 0;
}

