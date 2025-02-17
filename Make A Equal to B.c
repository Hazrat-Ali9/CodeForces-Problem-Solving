#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

void solve_it();

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

void solve_it(void)
{
    int n,count=0;
    scanf("%d",&n);
    int A[n],B[n];
    int A_one=0,A_zero=0;
    int B_one=0,B_zero=0;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        if(A[i]==1)
            A_one++;
        else
            A_zero++;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&B[i]);
        if(B[i]==1)
            B_one++;
        else
            B_zero++;
    }
    if(A_one==B_one && A_zero==B_zero)
    {
        int flag=1;
        for(int i=0;i<n;i++)
        {
            if(A[i]!=B[i])
                flag=0;
        }
        if(flag==0)
            printf("1\n");
        else
            printf("0\n");
    }
    else
    {
        count=(abs(B_one-A_one)+abs(B_zero-A_zero))/2;

        int rearrange=0;
        for(int i=0;i<n;i++)
        {
            if(A[i]!=B[i])
                rearrange++;
        }
        if(rearrange<=count)
            printf("%d\n",count);
        else
            printf("%d\n",count+1);

    }


}

