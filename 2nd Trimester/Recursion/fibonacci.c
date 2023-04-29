#include<stdio.h>
#include<stdlib.h>

//f0 =0
//f1=1
//f2 =f1+f0=1
//f3=f2+f1 =2
//fn=f(n-1)+f(n-2)
int fibo(int n)
{
if (n==0)
{
    return 0;
}
if (n==1)
{
    return 1;
}

return fibo(n-1)+fibo(n-2);
    
}

int main()
{
int num,finobacci;

printf("Enter Your Number : \n");

scanf("%d",&num);

finobacci =fibo(num);
printf("%d",finobacci);
    return 0;
}