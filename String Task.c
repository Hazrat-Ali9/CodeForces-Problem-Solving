#include<stdio.h>
#include<string.h>

int main()
{
    char A[105];
    scanf("%s",A);
    for(int i=0; i<strlen(A); i++)
    {
        if(A[i]>='A' && A[i]<='Z')
            A[i]+=32;
        if(A[i]!='a' &&A[i]!='e'&&A[i]!='i'&&A[i]!='o'&&A[i]!='u'&&A[i]!='y' )
            printf(".%c",A[i]);
    }

}
