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

void solve_it()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
        scanf("%d",A+i);
    int k,ans=0;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        int x;
        scanf("%d",&x);
        ans=(ans+x)%n;
    }
    printf("%d\n",A[ans]);
}

