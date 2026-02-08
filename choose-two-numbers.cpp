#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> a(n);
    int amx = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        amx = max(amx, a[i]);
    }
    int m;
    cin >> m;
    vector<int> b(m);
    int bmx = -1;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        bmx = max(bmx, b[i]);
    }
    cout << amx << " " << bmx << endl;
    return 0;
}
