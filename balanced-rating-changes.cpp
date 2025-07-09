#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    bool temp = true;
    while (n--)
    {
        int a;
        cin >> a;
        int b;
        if (a % 2 == 0)
        {
            b = a / 2;
        }
        else
        {
            if (temp)
            {
                b = ceil(a / 2.0);
            }
            else
            {
                b = floor(a / 2.0);
            }
            temp = !temp;
        }
        cout << b << endl;
    }
    return 0;
}
