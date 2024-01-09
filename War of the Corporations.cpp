// Hazart Ali
// University Of Scholars
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,m,ans,pl,sl,ml,r,l,cnt;
    string s,sp;
    while(cin>>s>>sp)
    {
         cnt=0;
         sl=s.size();
         pl=sp.size();
         l=pl;
         for(i=0;i<sl;i++){
            if(s.substr(i,l)==sp.substr(0,pl))
               {
                   cnt++;
                   i=i+l-1;
               }

         }
        cout<<cnt<<endl;
    }
    return 0;
}
