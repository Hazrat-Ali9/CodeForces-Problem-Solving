#include<stdio.h>
#include<string.h>

int main()
{
    char s[2000];
    fgets(s,2000,stdin);
    for(int j=0; j<strlen(s); j=j+2)
    {
        for(int i=0; i<strlen(s)-2; i=i+2)
        {
            if(s[i]>s[i+2])
            {
                int temp=s[i];
                s[i]=s[i+2];
                s[i+2]=temp;
            }
        }
    }
    puts(s);
}
