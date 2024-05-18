#include<stdio.h>
void pattern(int x);
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        pattern(x);
    }
    return 0;
}

void pattern(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
            (j==1||j==i)?printf("1 "):printf("0 ");
        printf("\n");
    }
}


