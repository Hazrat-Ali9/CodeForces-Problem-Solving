#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int ans, max=0;
    ans=a+b+c;
    if(ans>max)
        max=ans;
    ans=a+b*c;
    if(ans>max)
        max=ans;
    ans=a*(b+c);
    if(ans>max)
        max=ans;
    ans=a*b*c;
    if(ans>max)
        max=ans;
    ans=(a+b)*c;
    if(ans>max)
        max=ans;
    printf("%d",max);
    return 0;
}
