// Hazart Ali
// University Of Scholars
#include <stdio.h>
void solve()
{
    int key, d[3];
    scanf("%d%d%d%d", &key, &d[0], &d[1], &d[2]);
    for (int i = 0; i < 3; i++)
    {
        int temp = d[key - 1];
        d[key - 1] = 5;
        key = temp;
    }

    if (d[0] == 5 && d[1] == 5 && d[2] == 5)
        printf("YES\n");
    else
        printf("NO\n");
}

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
}
