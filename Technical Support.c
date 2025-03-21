#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a=0;
        scanf("%d\n",&n);
        char A[n+1];
        fgets(A,sizeof(A),stdin);
        for(int i=0;i<=n;i++)
        {
            if(A[i]=='Q')
                a--;
            else if(A[i]=='A' && a<0)
                a++;
            else
                a=a;
        }

        if(a==0)
            printf("Yes\n");
        else
            printf("No\n");
    }

}
