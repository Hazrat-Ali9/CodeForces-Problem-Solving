#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,c,d,e,g,w,v;
while(cin>>b>>d>>c)
    {
        e=d-b%d;
        g=c-b;
        if(e<=g)
        {
            cout<<e;
            e=e+d;

            while(e<=g)
            {
                cout<<" "<<e;
                e=e+d;
            }
        }
        else
        {
            cout<<"-1";
        }
        cout<<endl;

    }
    return 0;
}



