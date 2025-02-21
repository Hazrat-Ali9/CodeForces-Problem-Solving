#include<stdio.h>
#include<math.h>

int min_LCM(int x);
void solve_it();

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
        solve_it();

    return 0;
}

void solve_it()
{
    int n;
    scanf("%d",&n);

    int x=min_LCM(n);

    printf("%d %d\n",x,n-x);
}
int min_LCM(int x)
{
    int ans=1;
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            ans=x/i;
            break;
        }
    }
    return ans;
}
