#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int p,q,r,n,c,i,a[101];
    while(cin>>n)
    {
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        c=1;
        p=0;
        r=0;
        q=0;
        for(i=0; i<n; i++)
        {
            if(a[i]==25)
                p++;
            else if(a[i]==50)
            {
                if(p<1)
                {
                    c=0;
                    break;

                }
                else
                {
                    p=p-1;
                    q=q+1;
                }
            }
            else if(a[i]==100)
            {
                if(p>=1&&q>=1)
                {
                    p=p-1;
                    q=q-1;
                }
                else if(p>=3)
                {
                    p=p-3;
                }
                else
                {
                    c=0;
                    break;
                }
            }


        }
        if(c==1)
                cout<<"YES\n";
            else
                cout<<"NO\n";
}
        return 0;
}
