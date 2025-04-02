#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,p,m,n,a,b,c,d,e;
    while(cin>>a>>b>>c>>d>>e)
    {
        p=a+b+c+d+e;
        if(p<5)
            cout<<"-1"<<endl;
        else if(p%5==0)
            cout<<p/5<<endl;
        else
            cout<<"-1"<<endl;
    }

    return 0;
}
