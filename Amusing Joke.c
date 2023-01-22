#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    int i;
    char A[110],B[110],C[110];
    scanf("%s %s %s",A,B,C);

    int *freq= (int*) calloc(26,sizeof(int));
    for(i=0;i<strlen(A);i++)
        freq[A[i]-'A']+=1;

    for(i=0;i<strlen(B);i++)
        freq[B[i]-'A']+=1;

    for(i=0;i<strlen(C);i++)
        freq[C[i]-'A']-=1;

    for(i=0;i<26;i++)
    {
        if(*(freq+i)!=0)
        {
            printf("NO");
            free(freq);
            return 0;
        }
    }
    printf("YES");

    free(freq);
    return 0;
}
