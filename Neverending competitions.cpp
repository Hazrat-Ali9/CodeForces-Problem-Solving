
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i,j,n,m;
    while(cin>>n){
     string s1,s,ss;
     cin>>s1;
     cin>>s;
     for(i=0;i<n-1;i++){
        cin>>ss;
     }
     m=ss.size();

     if(n%2==0)
        cout<<"home\n";
     else
        cout<<"contest\n";
    }
    return 0;
}
