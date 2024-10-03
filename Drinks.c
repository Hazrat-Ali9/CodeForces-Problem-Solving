#include<stdio.h>

int main()
{
    int n;
    double sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        sum+=x;
    }
    double result= sum/n;
    printf("%.12lf",result);

}

