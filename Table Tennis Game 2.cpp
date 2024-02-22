#include<bits/stdc++.h>

using namespace std;

const int mx=100001;

int main()

{
   int k,a,b;
   int ans;
   cin>>k>>a>>b;

      if(a%k==0 && b<k)
      {
          ans=a/k;
      }

      else if(b%k==0 && a<k)
      {
          ans=b/k;
      }

      else if(b>=k && a>=k)
      {
          ans=(a/k)+(b/k);
      }

      else
      {
          ans=-1;
      }

      if(ans==0||ans==-1) cout<<"-1"<<endl;
      else cout<<ans<<endl;

   return 0;
}
