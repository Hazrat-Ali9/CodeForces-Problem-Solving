// University Of Scholars
// Hazrat Ali
#include <stdio.h>
int main()
{
    int n, x, y, one = 0, two = 0, wash;
    scanf("%d%d%d", &n, &x, &y);

    // using Loop
    for (int i = 0; i < n; i++)
    {
        int p;
        scanf("%d", &p);
        if (p == 1)
            one++;
        else
            two++;
    }
    // using Condition

    if (two > y)
    {
        x = x - (two - y);
    }
    if (one > x)
        wash = one - x;
    else
        wash = 0;
    printf("%d", wash);
}
