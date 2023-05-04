#include<stdio.h>
int gcd(int,int);
int main()
{
int a,b,GCD;
scanf("%d %d",&a,&b);
GCD=gcd(a,b);
printf("Result = %d",GCD);
return 0;
}

int gcd(int x,int y)
{
     if (y==1)
     {
        return x;
     }
     else
     {
        return gcd(y, x%y);
     }
     
      
}