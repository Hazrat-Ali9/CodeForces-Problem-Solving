#include<stdio.h>
#include<string.h>

int main(void)
{
    char A[105],flag=1;
    scanf("%s",A);

    for(int i=1; i<strlen(A); i++)
    {
        if(A[i]>='a' && A[i]<='z')
        {
            flag=0;
            break;
        }
    }
    if(!flag)
        puts(A);
    else
    {
        if(A[0]>='a'&& A[0]<='z')
            A[0]-=32;
        else
            A[0]+=32;

        for(int i=1; i<strlen(A); i++)
        {
            if(A[i]>='A'&& A[i]<='Z')
                A[i]+=32;
        }
        puts(A);
    }
    return 0;
}
