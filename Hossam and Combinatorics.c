#include<stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        unsigned long long int ans;
        scanf("%d",&n);
        int *A= (int*) malloc(n*sizeof(int));
        for(int i=0; i<n; i++)
            scanf("%d",(A+i));
        qsort(A, n, sizeof(int), cmpfunc);
        if(A[0]==A[n-1])
        {
            ans =  (unsigned long long int)n*(n-1);
            printf("%llu\n",ans);
            free(A);
            continue;
        }
        int min=1,max=1;
        for(int i=1; i<n; i++)
        {
            if(A[i]==A[i-1])
                min++;
            else
                break;
        }
        for(int i=n-1; i>=0; i--)
        {
            if(A[i]==A[i-1])
                max++;
            else
                break;
        }
        ans = (unsigned long long int) min*max*2;
        printf("%llu\n",ans);
        free(A);
    }
    return 0;
}
