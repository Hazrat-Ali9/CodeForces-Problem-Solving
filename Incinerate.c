#include<stdio.h>
#include<stdlib.h>

int sort (const void * a, const void * b)
{   return ( *(int*)a - *(int*)b );    }


int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,j=0;
        scanf("%d %d",&n,&k);
        int A[n],B[n];
        for(int i=0; i<n; i++)
            scanf("%d",&A[i]);

        for(int i=0; i<n; i++)
            scanf("%d",&B[i]);


        qsort(A,n,sizeof(int),sort);
        qsort(B,n,sizeof(int),sort);


        while(A[n-1]>0 && k>0 && j<n)
        {
            A[n-1]-=k;
            k-=B[j];
            j++;
        }

        if(A[n-1]<=0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}



