#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned long long int n, m, factor=0;
        scanf("%llu",&m);
        if(m==4)
        {
            printf("YES\n");
            continue;
        }
        unsigned long long int x=sqrt(m);
        n=x;
        x=x*x;
        if(x!=m || n%2==0 || m==1)
        {
            printf("NO\n");
            continue;
        }
        for (int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                factor++;
                if(factor>0)
                    break;
            }
        }
        if(factor!=0)
            printf("NO\n",n);
        else
            printf("YES\n",n);
    }
    return 0;
}
