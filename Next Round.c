#include<stdio.h>

int main ()
{
    int n,k, pass=0;
    scanf("%d %d",&n,&k);

    int M[n-1];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&M[i]);

    }
    k=M[k-1];
    for(int i=0;i<n;i++)
    {
        int m=M[i];
        if(m!=0 && m>=k)
            pass++;
    }
    printf("%d",pass);

}

