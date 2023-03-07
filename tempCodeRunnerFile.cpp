// Super Reduced String For Final : 2 Program
#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;

    int flag;

    for (int i = 0; i < (s.length() - 1); i++)
        if (s[i] == s[i + 1])
        {
            s.erase(s.begin() + i);
            s.erase(s.begin() + i);

            if (s.length() == 0)
            {
                flag;
                break;
            }

             i = -1;
        }

    if (flag)
        cout << "Empty String";
    else
        cout << s;

    return 0;
}
