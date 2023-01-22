#include <stdio.h>

int main()
{
    long long int t;
    scanf("%lld",&t);

    while(t--)
    {
        long long int w,h,n,piece=1;
        scanf("%lld%lld%lld",&w,&h,&n);

        while(w%2==0)
        {
            piece=piece*2;
            w=w/2;
        }
        while(h%2==0)
        {
            piece=piece*2;
            h=h/2;
        }


        if(piece>=n)
            printf("YES\n");
        else
            printf("NO\n");
    }
}








