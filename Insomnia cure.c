#include<stdio.h>

int main(void)
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int count=d;
    for(int i=1;i<=e;i++)
    {
        if(i%a!=0&&i%b!=0&&i%c!=0&&i%d!=0)
            count--;
    }
    printf("%d\n",count);
    return 0;
}
