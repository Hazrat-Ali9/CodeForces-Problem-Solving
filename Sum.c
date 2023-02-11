#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a+b+c==2*a || a+b+c==2*b || a+b+c==2*c)
            printf("YES\n");
        else
            printf("NO\n");
    }

}

