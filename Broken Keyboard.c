#include<stdio.h>
void solve_it();
int main(void)
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
    int mod=n%3;
    char str[n+1];
    scanf("%s",str);

    if(mod==2)
    {
        printf("NO\n");
        return;
    }

    for(int i=0;i<n-mod;i+=3)
    {
        if(str[i+1]!=str[i+2])
        {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

