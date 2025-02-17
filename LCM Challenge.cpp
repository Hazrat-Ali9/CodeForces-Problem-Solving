#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,k,l,t,ans,number;
    while(cin>>number)
    {
        if(number==1)
            ans=1;
        else if(number==2)
            ans=2;
        else if(number==3)
            ans=6;
        else if(number%2==0)
        {
            if(number%3==0)
                ans=(number-1)*(number-2)*(number-3);
            else
                ans=number*(number-1)*(number-3);
        }
        else
            ans=number*(number-1)*(number-2);
        cout<<ans<<endl;
    }
    return 0;
}
