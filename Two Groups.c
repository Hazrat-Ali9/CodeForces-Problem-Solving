// Hazart Ali
// University Of Scholars
#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        long int A[n], positive = 0, negetive = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &A[i]);
            if (A[i] >= 0)
                positive += A[i];
            else
                negetive += A[i];
        }
        printf("%lld\n", abs(positive + negetive));
    }
}
