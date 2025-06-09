#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<vector<int>> cnn(a);
    for (int i = 0; i < a - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        cnn[x - 1].push_back(y - 1);
        cnn[y - 1].push_back(x - 1);
    }
    long long all = a * (a - 1);
    long long no = cnn[b - 1].size() * cnn[c - 1].size();
    cout << all - no << endl;
    return 0;
}

