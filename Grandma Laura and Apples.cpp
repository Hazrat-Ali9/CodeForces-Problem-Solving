#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,num,grand,p,ans,sum;
    while(cin>>num>>p){
            string s;
            long long a[num];
        for(i=1;i<=num;i++)
        {
            cin>>s;
            if(s.size()==4)
                a[i]=0;
            else
                a[i]=1;
        }
        sum=1,grand=1;
        for(i=num-1;i>=1;i--)
        {
            if(a[i]==0)
                grand=grand*2;
            else
                grand=grand*2+1;
            sum+=grand;
        }
        ans=sum*p;
        cout<<ans/2<<endl;
    }
    return 0;
}
