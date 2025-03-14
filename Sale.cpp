#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,a;
    cin>>n>>a;
    vector<int> A(n);
    for(int i=0;i<n;i++)
        cin>>A[i];

    sort(A.begin(),A.end());

    int ans=0;
    for(int i=0;i<n && i<a;i++)
    {
        if(A[i]<0)
            ans+=A[i];
        else
            break;
    }
    cout << -ans;

    return 0;
}

