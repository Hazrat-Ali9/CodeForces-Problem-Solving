#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,freq[27];
        scanf("%d ",&n);
        char A[110];
        gets(A);

        for(int i=0;i<27;i++)
            freq[i]=0;
        for(int i=0;i<strlen(A);i++)
            freq[A[i]-96]=1;
        for(int i=26;i>=0;i--)
        {
            if(freq[i]==1)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}

