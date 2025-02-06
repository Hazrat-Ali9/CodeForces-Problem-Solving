    #include<stdio.h>

    int main()
    {
        int n;

        scanf("%d",&n);
        int A[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
        }
        for(int k=0;k<n;k++)
        {
            int z=A[k];
            int a=z/2; int b=2*a;
            for(int q=1;q<=z/2;q++)
            {

                printf("%d %d " ,a,b);
                a--; b--;
            }

            if(z%2==1) printf("%d",z);
            printf("\n");

        }
        return 0;
    }
