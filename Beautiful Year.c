#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    n++;
    int a=n/1000,b=(n/100)%10,c=(n/10)%10,d=n%10;
    while(a==b || a==c || a==d || b==c || b==d || c==d)
    {
        n++;
        a=n/1000;
        b=(n/100)%10;
        c=(n/10)%10;
        d=n%10;
    }
    printf("%d%d%d%d",a,b,c,d);
    return 0;
}

