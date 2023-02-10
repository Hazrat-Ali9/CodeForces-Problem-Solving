// Hazart Ali
// University Of Scholars
#include <stdio.h>
#include <string.h>

int main()
{
    char s[105], m[105];
    scanf("%s %s", s, m);
    int i, j = strlen(s) - 1;
    for (i = 0; i < strlen(s); i++, j--)
    {
        if (s[i] != m[j])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
