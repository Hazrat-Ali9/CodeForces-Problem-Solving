#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
   
    int T;
    if(!(cin >> T)) return 0;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> x(n+1);
        for (int i = 1; i <= n; ++i) cin >> x[i];

        unordered_map<int, vector<int>> pos;
        pos.reserve(n*2);
        for (int i = 1; i <= n; ++i) pos[x[i]].push_back(i);

        ll bestVal = LLONG_MIN;
        int besta = 1, bestl = 1, bestr = 1;

        for (auto &entry : pos)
        {
            int a = entry.first;
            vector<int> &v = entry.second;

            ll cur = 1;
            int curL = v[0];

            if (cur > bestVal)
            {
                bestVal = cur;
                besta = a;
                bestl = curL;
                bestr = v[0];
            }
            for (size_t i = 1; i < v.size(); ++i)
            {
                int gap = v[i] - v[i-1];
                ll delta = 2 - gap;
                if (cur + delta < 1)
                {

                    cur = 1;
                    curL = v[i];
                }
                else
                {
                    cur += delta;
                }
                if (cur > bestVal)
                {
                    bestVal = cur;
                    besta = a;
                    bestl = curL;
                    bestr = v[i];
                }
            }
        }

        cout << besta << ' ' << bestl << ' ' << bestr << '\n';
    }
    return 0;
}