#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,flag=0;
        scanf("%d",&n);
        int A[n];
        for(int i=0; i<n; i++)
            scanf("%d",&A[i]);

        for(int i=0,j=1; j<n; i++,j++)
        {
            if(A[j]<A[i])
            {
                flag=0;
                break;
            }

            while(A[j]>0)
            {
                int r;
                r=A[j]/A[i];
                if(r>0)
                    A[j]=A[j]-A[i]*r;
                else
                    A[j]=A[j]-A[i];
            }

            if(A[j]==0)
            {
                flag=1;
                A[j]+=A[i];
                continue;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            printf("YES\n");
        else if(flag==0)
            printf("NO\n");
    }
    return 0;
}
