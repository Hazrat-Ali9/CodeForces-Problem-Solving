// Hazart Ali
// University Of Scholars
#include<stdio.h>
int main(void)
{
    int n,count=0;
    scanf("%d ",&n);
    char A[20];
    for(int i=0;i<n;i++)
    {
        scanf("%s",A);
        if(A[0]=='T')
            count+= 4;
        else if(A[0]=='C')
            count+= 6;
        else if(A[0]=='O')
            count+= 8;
        else if(A[0]=='D')
            count+= 12;
        else
            count+= 20;
    }

    printf("%d",count);
    return 0;
}
