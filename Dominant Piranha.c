#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,count=0;
        scanf("%d",&n);

        int A[n];
        for(i=0; i<n; i++)
            scanf("%d",&A[i]);

        int max=A[0];
        for(i=1; i<n; i++)
        {
            if(max<A[i])
                max=A[i];
        }
        for(i=0;i<n;i++)
        {
            if(A[i]==max && i==0 && A[i]>A[i+1])
            {
                count=i+1;
            }

            else if(A[i]==max && i!=0 && i!=n-1 && (A[i]>A[i-1] || A[i]>A[i+1]))
            {
                count=i+1;
            }
            else if(A[i]==max && i==n-1 && A[i-1]<A[i])
            {
                count=i+1;
            }
            if(count>0)
                break;
        }

        if(count>0)
            printf("%d\n",count);
        else
            printf("-1\n");
    }
}
