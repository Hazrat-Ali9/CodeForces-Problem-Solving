#include<stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,even=0,odd=0,x;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&x);
            if(x % 2 != i % 2)
            {
                if (i % 2 == 0)
                    even++;
                else
                    odd++;
            }
        }
        if(even != odd)
            printf("-1\n");
        else
            printf("%d\n",even);
    }

    return 0;
}


