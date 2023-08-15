#include<stdio.h>
int gcd(int,int);
int lcm(int,int);
int main()
{
    int a,b;
    printf("Enter Two Number : ");
    scanf("%d %d",&a,&b);
    printf("GDC of %d and %d = %d\n",a,b,gcd(a,b));
    printf("LCM of %d and %d = %d\n",a,b,lcm(a, b));
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

int lcm(int a, int b) {
    int g = gcd(a, b);
    return (a * b) / g;
}
