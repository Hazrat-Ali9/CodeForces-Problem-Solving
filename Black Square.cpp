#include<bits/stdc++.h>
using namespace std;
int main()
{
    long  int a,b,c,d,i,j,ans;
    char p[100001];
    while(cin>>a>>b>>c>>d)
    {
        cin>>p;
        ans=0;
        for(i=0;i<strlen(p);i++)
        {
            if(p[i]=='1')
                ans+=a;
            else if(p[i]=='2')
                ans+=b;
            else if(p[i]=='3')
                ans+=c;
            else if(p[i]=='4')
                ans+=d;
        }
        cout<<ans<<endl;
    }
    return 0;

}
