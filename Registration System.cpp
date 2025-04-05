#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int p,q,y,z,a;
    string s[1000000000];
    while(cin>>z)
    {
        map<string,int>mq;
        for(p=0;p<z;p++)
        {
            cin>>s[p];

        }
        for(p=0;p<z;p++)
        {
            mq[s[p]]++;
            y=mq[s[p]];
            if(y==1)
                cout<<"OK\n";
            else
                cout<<s[p]<<y-1<<endl;
        }
    }
    return 0;
}


