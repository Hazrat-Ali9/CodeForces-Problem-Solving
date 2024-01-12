// Hazart Ali
// University Of Scholars
#include<bits/stdc++.h>
using namespace std;
long long row[10000],col[10000],r[10000],c[10000];
int main()
{
    long long i,j,n,m,pos,val,op,k,l;
    while(cin>>n>>m>>k)
    {
        for(l=1;l<=k;l++){
            cin>>op>>pos>>val;
            if(op==1){
                    row[pos]=val;
                    r[pos]=l;
            }
            else{
                    col[pos]=val;
                    c[pos]=l;
            }
        }
         for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                 if(r[i]>c[j])
                    cout<<row[i]<<" ";
                 else
                    cout<<col[j]<<" ";

            }
            cout<<endl;
        }
    }
    return 0;
}
