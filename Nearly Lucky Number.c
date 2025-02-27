#include<stdio.h>

int main()
{
    long long int n;
    int count=0;
    scanf("%lld",&n);
    while(n!=0)
    {
        int r=n%10;
        n=n/10;
        if(r==4 || r==7)
            count++;
    }
    if(count==4||count==7)
        printf("YES");
    else
        printf("NO");
    return 0;
}

