#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

void solve_it();
void sort_num_accending(int A[],int size);
void operations(int A[],int n,int *ptr);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve_it();
    }


    return 0;
}

void solve_it()
{
    int n,ans=999999999;
    scanf("%d",&n);
    int A[n];
    for(int i=0; i<n; i++)
        scanf("%d",A+i);
    sort_num_accending(A,n);

    operations(A,n,&ans);

    printf("%d\n",ans);
}

void operations(int A[],int n,int *ptr)
{
    int ans;
    for(int i=0; i<n-2; i++)
    {
        ans=A[i+1] - A[i] + A[i+2]-A[i+1];
        if(ans<*ptr)
            *ptr=ans;
    }
}

void sort_num_accending(int A[],int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-1-i; j++)
        {
            if(A[j]>A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}
