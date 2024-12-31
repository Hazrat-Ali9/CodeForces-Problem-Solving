#include<stdio.h>
#include<string.h>

int main()
{
    char A[110];
    gets(A);
    for(int i=0;i<strlen(A);i++)
    {
        if(A[i]=='H' || A[i]=='Q' || A[i]=='9')
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
}

