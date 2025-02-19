#include<stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if( (a<b && a<c && d>b && d>c) || (b<a&&b<d&&c>a&&c>d) || (c<a&&c<d&&b>a&&b>d) || (d<b&&d<c&&a>b&&a>c) )
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}

