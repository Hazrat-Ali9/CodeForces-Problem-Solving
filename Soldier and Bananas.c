#include<stdio.h>

int main()
{
    long long int starting_price,money,amount,cost=0;
    scanf("%lld%lld%lld",&starting_price,&money,&amount);
    for(int i=1; i<=amount; i++)
    {
        cost+=starting_price*i;
    }
    if(cost<=money)
        printf("0");
    else
        printf("%lld",cost-money);
}

