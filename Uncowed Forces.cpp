// Hazart Ali
// University Of Scholars
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i;
    double n,x,p[6],q[6],un,cowed,ans,temp,sum;
    while(cin>>p[1]>>p[2]>>p[3]>>p[4]>>p[5]>>q[1]>>q[2]>>q[3]>>q[4]>>q[5]>>un>>cowed)
    {
        x=500;
        sum=0;
        for(i=1; i<=5; i++)
        {
            temp=(1-(p[i]/250))*x*i-50*q[i];

            n=.3*x*i;

            sum+=max(n,temp);
        }
        sum+=un*100;
        sum-=cowed*50;
        cout<<sum<<endl;
    }
    return 0;
}
