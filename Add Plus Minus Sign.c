#include<stdio.h>
#include<string.h>


int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,diff;
        scanf("%d ",&n);
        char A[n+5];
        scanf("%s",A);

        if(A[0]=='0')
            diff=0;
        else
            diff=1;

        for(int i=1;i<strlen(A);i++)
        {
            if(A[i]=='0')
                printf("+");
            else if(A[i]=='1' && diff==0)
            {
                printf("+");
                diff++;
            }
            else
            {
                printf("-");
                diff--;
            }
        }
        printf("\n");
    }
    return 0;
}
