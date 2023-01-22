#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,even=0,odd=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            int x;
            scanf("%d",&x);
            if(x%2==1)
                odd++;
            else
                even++;
        }
        if(even>odd)
            printf("%d\n",odd);
        else
            printf("%d\n",even);
    }
}
