#include<stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a, b, c, d, e, f;
    scanf("%d %d\n%d %d\n%d %d", &a, &d, &b, &e, &c, &f);
    if((a == b || a == c || b == c) && (d == e || d == f || e == f))
        printf("NO\n");
    else        printf("YES\n");
    }
}
