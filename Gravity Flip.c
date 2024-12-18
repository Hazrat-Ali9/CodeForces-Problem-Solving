#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int A[105],B[105];
    for(int i=0;i<105;i++)
        A[i]=0,B[i]=0;
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        while(x--)
            A[x]+=1;
    }
    for(int i=0;i<105;i++)
    {
        while(A[i]--)
            B[A[i]]+=1;
    }
    for(int i=104;i>=0;i--)
    {
        if(B[i]>0)
            printf("%d ",B[i]);
    }
    return 0;
}
