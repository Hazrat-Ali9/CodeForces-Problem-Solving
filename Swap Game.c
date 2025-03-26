#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int A[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
        }
        if(A[0]==0)
            printf("Bob\n");
        else if(A[0]==1)
            printf("Bob\n");

        else
        {

            int min=A[0];
            for(int i=1;i<n;i++)
            {
            if(min>A[i])
                min=A[i];
            }

        if(min==A[0])
            printf("Bob\n");
        else
            printf("Alice\n");
        }

    }

}

