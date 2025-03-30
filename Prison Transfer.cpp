#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int m,temp,j,p,k,n,h,f;
    while(cin>>f>>h>>n)
    {
        temp=0;
        p=0;
        for(j=1;j<=n;j++)
        {
            cin>>m;
            {
               if(m<=h)
                    p++;
               else
                    p=0;
            }
            if(p>=n)
                temp++;
        }
        cout<<temp<<endl;
     }
    return 0;
}

