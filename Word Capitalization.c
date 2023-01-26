#include<stdio.h>
#include<string.h>

int main()
{
    char inp[1100];
    fgets(inp,1100,stdin);
    if(inp[0]>=97 && inp[0]<=123)
        inp[0]-=32;

    puts(inp);

}
