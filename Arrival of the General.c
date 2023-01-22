#include<stdio.h>

int main(void)
{
    int n,maxx=-1,minn=999999,minn_index,maxx_index;
    scanf("%d",&n);
    int A[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
        if(A[i]>maxx)
        {
            maxx=A[i];
            maxx_index=i+1;
        }
        if(A[i]<=minn)
        {
            minn=A[i];
            minn_index=i+1;
        }
    }
    if(maxx_index>minn_index)
        printf("%d",maxx_index-1+n-minn_index-1);
    else if(maxx_index<minn_index)
        printf("%d",maxx_index-1+n-minn_index);
    else
        printf("0");

    return 0;
}
