#include<stdio.h>
#include<string.h>
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,one=0,zero=0,o=0,z=0;
        scanf("%d ",&x);
        char A[x+5];
        scanf("%s",A);
        for(int i=0;i<strlen(A);i++)
        {
            if(A[i]=='1') one++;
            else zero++;
        }
        for(int i=0;i<strlen(A);i++)
        {
            if(A[i]=='0')
            {
                printf("%d ",one);
            }
            else
            {
                printf("%d ",zero+o+(o>0));
            }
            if(A[i]=='1') o++;
        }
        printf("\n");
    }


}
