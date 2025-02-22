#include<stdio.h>

void solve_it();

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
        solve_it();
    return 0;
}

void solve_it()
{
    int min_low,min_high,max_low,max_high;

    scanf("%d%d%d%d",&min_low,&min_high,&max_low,&max_high);

    if(min_high==min_low && max_high==max_low)
    {
        if(min_high==max_low)
            printf("%d\n",min_low);
        else
            printf("%d\n",min_low+max_low);
    }

    else if(min_low >=max_low && min_low<=max_high)
        printf("%d\n",min_low);

    else if(max_low >= min_low && max_low<=min_high)
        printf("%d\n",max_low);

    else
        printf("%d\n",min_low + max_low);
}



