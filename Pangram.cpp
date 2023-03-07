// Hazart Ali
// University Of Scholars
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    char j = 'A';
    cin >> n;
    cin >> s;
    for (int k = 0; k < n; k++)
    {
        s[k] = toupper(s[k]);
    }

    if (n >= 26)
    {
        for (int i = 0; i < 26; i++)
        {
            if (s.find(j) != -1)
            {
                j++;
            }
            else
            {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}