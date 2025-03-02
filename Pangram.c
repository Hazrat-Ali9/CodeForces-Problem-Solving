#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    getchar();
    char A[n];
    scanf("%s",A);

    int *freq= (int*) calloc(26,sizeof(int));
    for(int i=0;i<n;i++)
    {
        if(A[i]>='a'&& A[i]<='z')
            freq[A[i]-'a']=1;
        else
            freq[A[i]-'A']=1;
    }
    for(int i=0;i<26;i++)
    {
        if(*(freq+i)==0)
        {
            printf("NO\n");
            free(freq);
            return 0;
        }
    }

    printf("YES\n");
    free(freq);
    return 0;
}
