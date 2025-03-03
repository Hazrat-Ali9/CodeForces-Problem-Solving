#include<stdio.h>


void solve()
{
    int n;
    scanf("%d", &n);
    char s[n+1];
    scanf("%s", s);
    int ch[30][30];
    for(int i = 0; i < 30; ++i)
        for(int j = 0; j < 30; ++j)
            ch[i][j] = 0;

    for(int i = 1; i < n-1; ++i)
    {
        if(ch[(s[i]-'a')][(s[i+1]-'a')])
        {
            printf("YES\n");
            return;
        }
        ch[(s[i-1]-'a')][(s[i]-'a')]++;
    }
    printf("NO\n");
}

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
        solve();
}
