#include<stdio.h>
#include<math.h>

void max(int,int,int);
void power(int,int);
int main()
{
   
    int a,b,c;
    printf("Enter 3 Integer : ");
    scanf("%d %d %d",&a,&b,&c);
    
    max(a,b,c);

    int m,n;
    printf("Enter 2 Number : ");\
    scanf("%d %d",&m,&n);
    power(m,n);
    printf("%d To the Power %d = %f",m,n,pow(m,n)); /* math.h fucton will 
                                                    always return float or long float*/

    return 0;
}
void power(int x, int y)
{
   int product = 1;
   int i;
   for ( i = 1; i <= y; i++)
   {
    product = product*x;
   }

  printf("%d To the Power %d = %d\n",x,y,product);
   
    
}
void max(int x,int y, int z)
{
    int temp;
    if(x>y && x>z)
    {
        temp = x;
    }
    else if(y>x && y>z)
    {
        temp = y;
    }
    else
    {
        temp = z;
    }
    
    printf("The Maximum of %d %d %d is %d\n",x,y,z,temp);
}
