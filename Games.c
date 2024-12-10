#include<stdio.h>

int main(void)
{
    int n,x,y,count=0;
    scanf("%d",&n);
    int A[n],B[n];

    for(int i=0;i<n;i++)
        scanf("%d %d",&A[i],&B[i]);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            if(A[i]==B[j])
                count++;
    }
    printf("%d\n",count);
    return 0;
}
