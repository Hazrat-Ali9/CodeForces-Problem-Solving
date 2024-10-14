#include<stdio.h>
#include<string.h>

int main(void)
{
    char A[220];
    scanf("%s",A);
    for(int i=0;i<strlen(A);i++)
    {
        if(A[i]=='W'&&A[i+1]=='U'&&A[i+2]=='B')
            i+=2;
        else
        {
            printf("%c",A[i]);
            if(i<strlen(A)-3 && A[i+1]=='W'&&A[i+2]=='U'&&A[i+3]=='B')
                printf(" ");
        }
    }
    return 0;
}

// Dub step Progran