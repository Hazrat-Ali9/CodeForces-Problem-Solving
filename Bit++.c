#include <stdio.h>
#include<string.h>

int main()
{
    int t;
    int x=0;
    scanf("%d ",&t);
    for(int i=0;i<t;i++)
    {
        char A[4];
        for(int j=0;j<4;j++)
        {
            scanf("%c",&A[j]);
        }
        if(A[0]=='+' && A[1]=='+')
            ++x;
        else if(A[1]=='+' && A[2]=='+')
            x++;
        else if(A[0]=='-' && A[1]=='-')
            --x;
        else if(A[1]=='-' && A[2]=='-')
            x--;
    }
    printf("%d\n",x);
}
