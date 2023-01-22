#include<stdio.h>
#include<string.h>

int main()
{
    int n,A=0,D=0;
    scanf("%d ",&n);
    char r[n+1];
    fgets(r,n+1,stdin);
    for(int i=0;i<=n;i++)
    {
        if(r[i]=='A')
            A++;
        else if(r[i]=='D')
            D++;
    }
    if(A>D)
        printf("Anton");
    else if(A<D)
        printf("Danik");
    else
        printf("Friendship");
    return 0;
}


