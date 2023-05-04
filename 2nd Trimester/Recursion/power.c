#include<stdio.h>
int power(int, int);

int main()
{
    int a,b,result;
    scanf("%d %d",&a,&b);
    result=power(a,b);
    printf("%d^%d = %d",a,b,result);

}

int power(int x, int y)
{
    if (y == 0)
    {
     return 1;   
    }
    else
    {
        return x*power(x,y-1);
    }

}