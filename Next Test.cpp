#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,temp,j,p[10000000];
    while(cin>>j)
    {
        for(i=0;i<j;i++)
        {
            cin>>p[i];
        }
        sort(p,p+j);
        if(p[0]>1)
            temp=1;
        else
        {
        for(i=1;i<j;i++)
        {
            if(p[i]-p[i-1]>1)
                {
                    temp=p[i-1]+1;
                    break;
                }

        }
        }
        if(temp<=0)
            temp=p[j-1]+1;
        cout<<temp<<endl;
    }
    return 0;
}


