#include<stdio.h>

int main()
{
    int n,h,s=0;
    scanf("%d %d",&n,&h);
    for(int i=0;i<n;i++)
    {
        int w;
        scanf("%d",&w);
        if(w<=h) s++;
        else s+=2;
    }

    printf("%d\n",s);

    return 0;
}

