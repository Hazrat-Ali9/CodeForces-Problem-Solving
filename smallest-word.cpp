#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            temp[i] = s[i] == 'a' ? 1 : 0;
        }
        else
        {
            temp[i] = s[i] != s[i + 1] ? 1 : 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
    return 0;
}
