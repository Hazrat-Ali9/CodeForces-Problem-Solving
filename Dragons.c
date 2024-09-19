#include<stdio.h>

void get_sort(int A[],int B[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;

                temp=B[j];
                B[j]=B[j+1];
                B[j+1]=temp;
            }
        }
    }


}

int main(void)
{
    int h,t;
    scanf("%d %d",&h,&t);
    int A[t],B[t];
    for(int i=0;i<t;i++)
        scanf("%d %d",&A[i],&B[i]);

    get_sort(A,B,t);


    for(int i=0;i<t;i++)
    {
        if(A[i]<h)
            h+=B[i];
        else
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
