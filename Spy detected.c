#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    for(int q=0;q<t;q++)
    {
        int n,N=10000;
    scanf("%d",&n);
    int A[n];
    int P[N];
    for(int i=0;i<N;i++)
    {
        P[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        A[i]=x;
        P[A[i]]+=1;
    }

    for(int l=1;l<N;l++)
    {
        if(P[l]==1)
        {
            for(int k=0;k<n;k++)
            {
                if(l==A[k])
                {
                     printf("%d\n",k+1);

                    break;
                }


     }}}
    }
}
