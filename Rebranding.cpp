#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,m,i,j,x,y;
    while(cin>>n>>m)
    {
        string s;
        cin>>s;
        char x,y;
        int a[1000];
        for(i=97;i<=122;i++)
        {
            a[i]=i;
        }
        for(i=0;i<m;i++){
            cin>>x>>y;
            for(j=97;j<=122;j++)
            {
                if(a[j]==x)
                    a[j]=y;
                else if(a[j]==y)
                    a[j]=x;
            }
        }
        for(i=0;i<s.size();i++)
        {
                s[i]=a[s[i]];
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
