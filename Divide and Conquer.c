#include<stdio.h>

void solve()
{
    int n,count=0;
    long long int sum=0;
    scanf("%d",&n);
    int A[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    if(sum%2==0)
    {
        printf("%d\n",count);
        return;
    }
    while(1)
    {
        count++;
        for(int i=0; i<n; i++)
        {
            if((A[i]/2)%2!=A[i]%2)
            {
                printf("%d\n",count);
                return;
            }
            A[i]/=2;

        }
    }
}




int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }
    return 0;
}
