
#include<stdio.h>

int main()
{
    long long int n,b;
    scanf("%lld %lld",&n,&b);
    if(n%2==0)
    {
        if((n/2)>=b)
            printf("%lld",2*b-1);
        else
            printf("%lld",2*b-n);
    }
    else
    {
        if(((n+1)/2)>=b)
            printf("%lld",2*b-1);
        else
            printf("%lld",(2*b-n-1));
    }
    return 0;
}
