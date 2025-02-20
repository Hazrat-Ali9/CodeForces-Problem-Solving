#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int A[3];
        scanf("%d%d%d",&A[0],&A[1],&A[2]);
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<3-i-1; j++)
            {
                if(A[j]>A[j+1])
                {
                    int temp=A[j];
                    A[j]=A[j+1];
                    A[j+1]=temp;
                }
            }
        }
        printf("%d\n",A[1]);
    }
    return 0;
}
