#include<stdio.h>

int main()
{
    int m,n;
    int i,j,count=0;
    scanf("%d%d",&m,&n);
    long long int A[m],B[n];
    for(i=0; i<m; i++)
        scanf("%lld",&A[i]);

    for(i=0; i<n; i++)
        scanf("%lld",&B[i]);

    for(i=0,j=0; j<n;j++)
    {
        while(A[i]<B[j] && i<m)
        {
            count++;
            i++;
        }
        printf("%d ",count);
    }
    return 0;
}
