#include <stdio.h>

int main()
{
    int n,even=0,odd=0;
    scanf("%d",&n);

    int A[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        if(A[i]%2==0)
            even++;
        else
            odd++;
    }
    if(even==1)
    {
        for(int i=0;i<n;i++)
        {
            if(A[i]%2==0)
            {
                printf("%d",i+1);
                break;
            }
        }
    }
    else if(odd==1)
    {
        for(int i=0;i<n;i++)
        {
            if(A[i]%2==1)
            {
                printf("%d",i+1);
                break;
            }
        }
    }

    return 0;
}
