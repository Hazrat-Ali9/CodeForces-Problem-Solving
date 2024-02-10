#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, m, s, res, last_i, last_j;
bool matrix[1001][1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> s;
            matrix[i][j] = (s == 1);
        }
    }

    last_i = -1;
    last_j = -1;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(matrix[i][j])
            {
                if(last_i != i) res += j;
                else res += 2*(j - last_j - 1);
                last_i = i;
                last_j = j;
            }

            if(j==(m-1) && last_i==i) res += (j - last_j);
        }
    }

    last_i = -1;
    last_j = -1;

    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(matrix[i][j])
            {
                if(last_j != j) res += i;
                else res += 2*(i - last_i - 1);
                last_i = i;
                last_j = j;
            }

            if(i==(n-1) && last_j==j) res += (i - last_i);
        }
    }

    cout << res << endl;
    return 0;
}
