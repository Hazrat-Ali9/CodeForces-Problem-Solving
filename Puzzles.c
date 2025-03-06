#include<stdio.h>
#include<stdlib.h>

int sort (const void * a, const void * b)
{   return ( *(int*)a - *(int*)b );    }

int main(void)
{
    int p,n,diff,minn=999999;
    scanf("%d%d",&p,&n);
    int A[n];
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);

    qsort(A,n,sizeof(int),sort);

    for(int i=0,j=p-1;j<n;i++,j++)
    {
        diff=A[j]-A[i];
        if(diff<minn)
            minn=diff;
    }
    printf("%d",minn);
    return 0;
}
