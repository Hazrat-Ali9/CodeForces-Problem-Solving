#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,m,j,snowball,x,robot;
    while(cin>>n>>m)
    {
        long long a[n+1];
        for(i=1;i<=n;i++){
            cin>>a[i];
        }
        for(i=1;;i++){
            if(i*(i+1)/2==m)
            {
                robot=i;
                break;
            }
            if(i*(i+1)/2>m)
            {
             robot=m-(i*(i-1)/2);
             break;
            }
        }
        cout<<a[robot]<<endl;
    }
    return 0;
}
