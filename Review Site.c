#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,count=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            int x;
            scanf("%d",&x);
            if(x==1 || x==3)
                count++;
        }
        printf("%d\n",count);

    }

    return 0;
}

