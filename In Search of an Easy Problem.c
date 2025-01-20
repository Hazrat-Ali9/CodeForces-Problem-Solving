#include<stdio.h>

int main()
{
    int n, hard=0;
    scanf("%d",&n);
    while(n--)
    {
        int x;
        scanf("%d",&x);
        if(x==1)
            hard=1;
    }
    if(hard==1)
        printf("HARD");
    else
        printf("EASY");
    return 0;
}
