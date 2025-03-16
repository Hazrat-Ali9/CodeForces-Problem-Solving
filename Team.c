#include<stdio.h>

int main ()
{
    int n, solve=0;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a+b+c>1)
            solve++;
    }
    printf("%d\n",solve);
}
