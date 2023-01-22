#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    char A[1050],count=0;
    gets(A);

    int *freq= (int*) calloc(26,sizeof(int));

    for(int i=0; i<strlen(A); i++)
    {
        if(A[i]>='a' && A[i]<='z')
            freq[A[i]-'a']=1;
    }
    for(int i=0; i<26; i++)
    {
        if(*(freq+i)==1)
            count++;
    }
    printf("%d",count);

    free(freq);
    return 0;
}

