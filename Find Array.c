#include<stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i=2;
        scanf("%d",&n);
        if(n==1)
            printf("1");
        else
        {
            for(int i=2;i<n+2;i++)
                printf("%d ",i);
        }
        printf("\n");
    }

    return 0;
}
