#include<stdio.h>
#include<string.h>

int main()
{
    int n,group=0;
    char p;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char x,y;
        scanf(" %c%c",&x,&y);
        if(i==0 && x=='1')
                p='0';
        else if(i==0 && x=='0')
            p='1';
        if(x!=p)
            group++;
        p=x;
    }
    printf("%d",group);
}
