#include<stdio.h>

int main()
{
    int h[4],change=0;
    for(int i=0; i<4; i++)
        scanf("%d",&h[i]);

    for(int i=0; i<3; i++)
    {
        for(int j=i+1; j<4; j++)
        {
            if(h[i]==h[j])
            {
                change++;
                break;
            }
        }

    }
    printf("%d",change);

}


