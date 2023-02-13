// Hazart Ali
// University Of Scholars
#include<stdio.h>
int main()
{
    int t,max=0,m=0;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        m=m+b-a;
        if(m>max)
            max=m;
    }
    printf("%d",max);
}
