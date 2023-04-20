#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int ans,hazrat,num,mid;
    while(cin>>num>>hazrat)
    {
        mid=num/2;
         if(num==1 && hazrat==1)
             cout<<"1\n";
        else if(mid<hazrat)
            cout<<hazrat-1<<endl;
        else
            cout<<hazrat+1<<endl;
    }
    return 0;
}
