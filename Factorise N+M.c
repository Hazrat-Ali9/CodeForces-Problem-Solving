#include<stdio.h>
#include<math.h>



int prime(int n)
{
    int factor=0;
    for (int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            factor++;
            break;
        }
    }
    if(factor==1)
        n=prime(++n);
    else
        return n;
}
int check_prime(int n)
{
    int factor=0;
    for (int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void solve()
{
    int x,add=2;
    scanf("%d",&x);
    x=x+add;
    while(check_prime(x))
    {
        add=prime(++add);
        x=x+add;
    }
    printf("%d\n",add);
}
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }

}
