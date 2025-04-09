#include <stdio.h>
#include<string.h>

int main()
{
    char A[150],B[150];
    scanf("%s",&A);
    scanf("%s",&B);
    for(int i=0;i<strlen(A);i++)
    {
        if(A[i]>=65 && A[i]<=90)
            A[i]+=32;
        if(B[i]>=65 && B[i]<=90)
            B[i]+=32;
        if(A[i]>B[i])
            {
                printf("1\n");
                return 0;
            }
        else if(A[i]<B[i])
        {
            printf("-1\n");
            return 0;
        }
    }
    printf("0\n");
    return 0;
}
