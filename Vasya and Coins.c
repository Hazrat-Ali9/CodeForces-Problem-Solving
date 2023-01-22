#include<stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned int x,y;
        scanf("%u%u",&x,&y);
        (x==0)?printf("%u\n",x+1):printf("%u\n",y*2+x+1);
    }
    return 0;
}


