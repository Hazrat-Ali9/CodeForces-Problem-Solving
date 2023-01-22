#include<stdio.h>

int main()
{
    int a,b,year;
    scanf("%d%d",&a,&b);
    while(a<=b)
    {
        a*=3;
        b*=2;
        year++;
    }
    printf("%d",year);

}
