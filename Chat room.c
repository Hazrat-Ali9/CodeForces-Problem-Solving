#include<stdio.h>
#include<string.h>

int main()
{
    char s[105],msg[]="hello";
    scanf("%s",s);
    int i,j,index=0;
    for(i=0; i<5; i++)
    {
        for(j=index; j<strlen(s); j++)
        {
            if(msg[i]==s[j])
            {
                index=j;
                break;
            }
        }
        if(msg[i]!=s[index])
        {
            printf("NO");
            return 0;
        }
        index++;
    }
    printf("YES");
    return 0;
}

