#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int A[n];
        for(int i=0; i<n; i++)
            scanf("%d",&A[i]);

        for(int i=0; i<n; i++)
        {
            int up_down;
            scanf("%d ",&up_down);
            for(int j=0; j<up_down; j++)
            {
                char x;
                scanf("%c",&x);
                if(x=='U')
                {
                    A[i]-=1;
                    if(A[i]==-1)
                        A[i]=9;
                }
                else if(x=='D')
                {
                    A[i]+=1;
                    if(A[i]==10)
                        A[i]=0;
                }
            }
        }
        for(int i=0; i<n; i++)
            printf("%d ",A[i]);

        printf("\n");
    }
    return 0;
}

