#include<stdio.h>
#include<string.h>

int main()
{
    int x,y;
    scanf("%d%d ",&x,&y);
    char A[x+1];
    scanf("%s",&A);
    while(y--)
    {
        for(int i=0; i<strlen(A)-1 ; i++)
        {
            if(A[i]=='B' && A[i+1]=='G')
            {
                char temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
                i++;
            }
        }
    }
    printf("%s\n",A);
}
