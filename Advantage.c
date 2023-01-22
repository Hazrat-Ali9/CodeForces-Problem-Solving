#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,max,max2;
        scanf("%d ",&n);
        int A[n];
        for(int i=0; i<n; i++)
            scanf("%d",&A[i]);

        int unq=A[0],flag=1;
        for(int i=1; i<n; i++)
        {
            if(unq!=A[i])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            for(int i=0; i<n; i++)
                printf("0 ");
            printf("\0");
            continue;
        }
        else
        {

            if(A[0]>A[1])
            {
                max=A[0];
                max2=A[1];
            }


            else
            {
                max=A[1];
                max2=A[0];
            }
            for(int i=2; i<n; i++ )
            {
                if(A[i]>max)
                {
                    max2=max;
                    max=A[i];
                }
                else if(A[i]>max2)
                {
                    max2=A[i];
                }
            }
            for(int i=0; i<n; i++)
            {
                if(A[i]!=max)
                    printf("%d ",A[i]-max);
                else
                    printf("%d ",max-max2);
            }
            printf("\n");
        }
    }
    return 0;
}


