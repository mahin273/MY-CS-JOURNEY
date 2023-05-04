#include<stdio.h>
#include<math.h>

int gcd(int,int);
int main()
{
int a,b,result;
scanf("%d%d",&a,&b);
if (a>b)
{
   result=gcd(a,b);

}
else
{
   result=gcd(b,a);
}
  printf("Result = %d",result);


return 0;
}

int gcd(int x,int y)
{
     if (y==0)
     {
        return x;
     }
     else
     {
        return gcd(y, x%y);
     }


}
