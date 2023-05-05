#include<stdio.h>
int count(int);
int main()
{
    int n,Digits;
    scanf("%d",&n);
    Digits=count(n);
    printf("Result = %d",Digits);
     

}

int count(int x)
{
if (x==0)
{
    return 0;
}
else
{
    return 1+count(x/10);
}

}