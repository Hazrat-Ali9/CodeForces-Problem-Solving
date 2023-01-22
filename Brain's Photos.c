#include <stdio.h>

int main()
{
    int m,n,bw;
    scanf("%d %d",&m,&n);
    char A[m*n];
    for(int i=0; i<m*n;i++)
    {
        scanf("\n %c",&A[i]);
    }
    for(int i=0;i<m*n;i++)
    {
        if(A[i]=='W' || A[i]=='B' || A[i]=='G')
            bw++;
    }
    if(bw==m*n)
        printf("#Black&White");
    else
        printf("#Color");



}
