#include<stdio.h>

int main()
{
    int s;
    scanf("%d",&s);
    printf("%d\n",(s/5 + (s%5!=0)));

    return 0;
}
