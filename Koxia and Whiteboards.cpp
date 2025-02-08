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
        int x,y;
        cin>>x>>y;
        list<int> A;
        long long sum=0;

        for(int i=0; i<x; i++)
        {
            int in;
            cin >> in;
            sum+=in;
            A.push_front(in);
        }

        while(y--)
        {
            A.sort();
            int i;
            cin >> i;
            sum=sum + i - A.front();
            A.pop_front();
            A.push_front(i);
        }

        cout << sum << "\n";
    }
    return 0;
}
