#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int l=2,h=3*n,count=0;
        while(h>l)
        {
            count++;
            l+=3;
            h-=3;
        }
        l=2,h=3*n;
        printf("%d\n",count);
        while(h>l)
        {
            printf("%d %d\n",l,h);
            l+=3;
            h-=3;
        }
    }

}
//BANBANBAN
//123456789
