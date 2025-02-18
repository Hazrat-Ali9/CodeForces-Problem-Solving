#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=1, b=n*n;
        int A[n+1][n+1];
        for(int i=1; i<=n; i++)
        {
            if(i%2==1)
            {
                for(int j=1; j<=n; j++)
                {
                    if(j%2==1)
                    {
                        A[i][j]=b;
                        b--;
                    }
                    else
                    {
                        A[i][j]=a;
                        a++;
                    }
                }
            }
            else
            {
                for(int j=n; j>0; j--)
                {
                    if(j%2==1)
                    {
                        A[i][j]=a;
                        a++;
                    }
                    else
                    {
                        A[i][j]=b;
                        b--;
                    }
                }
            }

        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
                cout << A[i][j] << ' ' ;
            cout << '\n';
        }
    }
    return 0;
}
