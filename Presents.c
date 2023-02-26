// Hazart Ali
// University Of Scholars
#include<stdio.h>
int main()
{
    int n,free=0;
    scanf("%d",&n);
    int A[n];
    for(int i=1;i<=n;i++)
    {
        int x;
        scanf("%d",&x);
        A[x]=i;
    }
    for(int i=1;i<=n;i++)
        printf("%d ",A[i]);
    return 0;
}


