#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int p=0;p<t;p++)
    {
        int n,i,eat=0;
    scanf("%d ",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int min=A[0];
    for(i=1;i<n;i++)
    {
        if(A[i]<min)
            min=A[i];
    }
    for(i=0;i<n;i++)
    {
        eat+=(A[i]-min);
    }
    printf("%d\n",eat);
    }
}
