#include<stdio.h>
#include<string.h>

int main()
{
    char A[110],B[110];
    scanf("%s %s",A,B);
    for(int i=0;i<strlen(A);i++)
    {
        if(A[i]!=B[i])
            printf("1");
        else
            printf("0");
    }

}

