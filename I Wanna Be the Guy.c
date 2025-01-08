#include<stdio.h>
int main()
{
    int n,p=0,q=0;
    scanf("%d",&n);
    int A[n+1];
    for(int i=0; i<=n; i++)
        A[i]=0;
    for(int i=0; i<=p; i++)
    {
        int x;
        scanf("%d",&x);
        if(i==0)
        {
            p=x;
            continue;
        }
        A[x]=1;
    }
    for(int i=0; i<=q; i++)
    {
        int x;
        scanf("%d",&x);
        if(i==0)
        {
            q=x;
            continue;
        }
        A[x]=1;
    }
    for(int i=1; i<=n; i++)
    {
        if(A[i]==0)
        {
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");
    return 0;
}
