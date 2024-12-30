#include<stdio.h>

int main(void)
{
    int n,note=0;
    scanf("%d",&n);
    while(n>0)
    {
        if(n>=100)
        {
            note+=n/100;
            n=n%100;
        }
        else if(n>=20)
        {
            note+=n/20;
            n=n%20;
        }
        else if(n>=10)
        {
            note+=n/10;
            n=n%10;
        }
        else if(n>=5)
        {
            note+=n/5;
            n=n%5;
        }
        else
        {
            note+=n;
            break;
        }
    }
    printf("%d",note);
    return 0;
}
