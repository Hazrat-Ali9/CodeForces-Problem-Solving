#include<iostream>

   using namespace std;
   int main()
   {
       int n,i,sum=0;
       cin>>n;

       int a1=0,a2=0,a3=0,a4=0,a5=0;
       int b1=0,b2=0,b3=0,b4=0,b5=0;
       int v;

       for ( i=0; i<n; i++)
       {
           cin>>v;
           if (v==1) a1++;
           if (v==2) a2++;
           if (v==3) a3++;
           if (v==4) a4++;
           if (v==5) a5++;

       }

       for ( i=0; i<n; i++)
       {
           cin>>v;
           if (v==1) b1++;
           if (v==2) b2++;
           if (v==3) b3++;
           if (v==4) b4++;
           if (v==5) b5++;

       }

       if ( (a1+b1)%2==0 &&(a2+b2)%2==0 &&(a3+b3)%2==0 &&(a4+b4)%2==0 &&(a5+b5)%2==0 )
       {
        sum =sum+abs(a1-b1)/2;
        sum =sum+abs(a2-b2)/2;
        sum =sum+abs(a3-b3)/2;
        sum =sum+abs(a4-b4)/2;
        sum =sum+abs(a5-b5)/2;

        cout<<(sum/2)<<endl;
       }
       else cout<<"-1"<<endl;

       return 0;
   }
