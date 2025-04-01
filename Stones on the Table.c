#include<stdio.h>
#include<string.h>

int main()
{
    int lenght;
    scanf("%d",&lenght);
    char s[lenght];
    int count=0;
    scanf(" %s",s);
    for(int i=1; i<lenght; i++)
    {
        if(s[i]==s[i-1])
            count++;
    }
    printf("%d",count);
}



