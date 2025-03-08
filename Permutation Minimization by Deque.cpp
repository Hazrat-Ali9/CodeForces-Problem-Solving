#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n,in;
        list<int> A;
        cin >> n >> in;
        A.push_back(in);
        n--;
        while(n--)
        {
            cin >> in;
            if(in<A.front())
                A.push_front(in);
            else
                A.push_back(in);
        }

        for(auto it=A.begin();it!=A.end();it++)
            cout << *it << ' ';
        cout << '\n';
    }
    return 0;
}

