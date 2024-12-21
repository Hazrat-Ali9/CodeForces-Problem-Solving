#include <cstdio>
using namespace std;

int main ()
{
    int i, j, k, l;
    scanf("%d:%d\n%d:%d", &i, &k, &j, &l);
    printf("%02d:%02d",(i - j - (l > k) + 24) % 24, (k - l + 60) % 60);
    return 0;
}
