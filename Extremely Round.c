#include<stdio.h>
#include<math.h>
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        int p=1,ans=0,dgt=0;
        while(p<=x)
        {
            ans++;
            if(p<pow(10,dgt+1))
                p+=pow(10,dgt);
            else
            {
                dgt++;
                p+=pow(10,dgt);
            }
        }
        printf("%d\n",ans);

    }
    return 0;
}
