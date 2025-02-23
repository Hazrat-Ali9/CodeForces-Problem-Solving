#include<stdio.h>
#include<math.h>

int main()
{
    int n, l, h;
    scanf("%d%d%d",&n,&l,&h);
    int A[n],count_min=0,count_max=0,max=0,min=0,p=pow(2,l-1),q=1;
    for(int i=0; i<n; i++,count_min++,count_max++)
    {
        max+=q;
        min+=p;
        if(p>1)
        {
            count_min=0;
            p/=2;
        }
        if(count_max<h-1)
        {
            q*=2;
        }

    }

    printf("%d %d",min,max);
}
