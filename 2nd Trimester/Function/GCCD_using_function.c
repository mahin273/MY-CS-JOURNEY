#include<stdio.h>
int gcd(int,int);
int main()
{
    int a,b;
    printf("Enter Two Number : ");
    scanf("%d %d",&a,&b);
    printf("GDC of %d and %d = %d",a,b,gcd(a,b));
    return 0;
}
int gcd(int x,int y)
{
int max,min;
if (x>y)
{
    max=x;
    min = y;
}
else
{
    max =y;
    min = x;
}
while (max%min !=0)
{   int temp =min;
    min = max%min;
    max = temp;
}
return min;



}