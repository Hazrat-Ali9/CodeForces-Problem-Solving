#include<stdio.h>

int main(void)
{
    int n,streak=0,initial=-1,count=0;
    scanf("%d",&n);
    int A[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
        if(A[i]>=initial)
        {
            count++;
            initial=A[i];
        }
        else
        {
            count=1;
            initial=A[i];
        }
        if(streak<count)
            streak=count;
    }
    printf("%d",streak);

    return 0;
}

