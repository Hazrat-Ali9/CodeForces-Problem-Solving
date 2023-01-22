#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,A[5][5];

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
//            printf("%d",A[i][j]);

            if(A[i][j]==1)
            {
                printf("%d",abs(2-i)+abs(2-j));
                break;
            }

        }
    }

    return 0;
}
