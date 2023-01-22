    #include<stdio.h>

    int main()
    {
        int a,k;
        scanf("%d %d",&a,&k);
        for(int i=1;i<=k;i++)
        {
            if((a%10)==0){
                a=a/10;
            }
            else {
                a=a-1;
            }

        }
        printf("%d\n",a);


        return 0;
    }
