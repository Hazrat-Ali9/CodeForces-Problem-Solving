#include<stdio.h>
#include<string.h>

int main()
{
    char A[105];
    char frequency[27];
    for(int i=0;i<27;i++)
        frequency[i]=0;
    scanf("%s",A);
    for(int i=0;i<strlen(A);i++)
    {
        frequency[A[i]-'a'+1]+=1;
    }
    int count=0;
    for(int i=0;i<27;i++)
    {
        if(frequency[i]>0)
            count++;
    }
    if(count%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
}
