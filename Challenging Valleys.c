#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,valley=0,valley_count=0;
        scanf("%d",&n);
        int A[n];
        for(int i=0; i<n; i++)
        {
            int x;
            scanf("%d",&x);
            if(i==0)
            {
                A[valley]=x;
                valley++;
            }
            else if(x!=A[valley-1])
            {
                A[valley]=x;
                valley++;
            }
        }
        if(valley==1)
        {
            printf("YES\n");
            continue;
        }

        for(int i=0; i<valley; i++)
        {
            if(i==0 && A[i]<A[i+1])
            {
                valley_count++;
            }
            else if(i>0 && i<valley-1 && A[i]<A[i+1] && A[i]<A[i-1])
            {
                valley_count++;
                if(valley_count>1)
                    break;
            }
            else if(i==valley-1 && A[i]<A[i-1])
            {
                valley_count++;
            }
        }
        if(valley_count==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
