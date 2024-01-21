// Hazart Ali
// University Of Scholars
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,m,r,mini,maxi;
    while(cin>>n)
    {
        r=n%7;
        m=n/7;
        maxi=mini=m*2;
        if(r==6)
            mini++;
        if(r<=2)
            maxi+=r;
        else
            maxi+=2;
        cout<<mini<<" "<<maxi<<endl;
    }
    return 0;
}
