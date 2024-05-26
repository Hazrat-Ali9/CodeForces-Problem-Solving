#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,ans=0;
    cin >> n;
    vector<int> A(12);
    for(int i=0; i<12; i++)
        cin >> A[i];

    if(n==0)
        cout << ans << '\n';
    else
    {
        sort(A.rbegin(),A.rend());
        int k=0;
        for(int i=0; i<12 && k<n; i++)
        {
            k+=A[i];
            ans++;
        }
        if(k>=n)
            cout << ans << '\n';
        else
            cout << "-1\n";
    }
    return 0;
}
