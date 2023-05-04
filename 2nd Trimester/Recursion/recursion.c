#include<stdio.h>

void callme(int);
int main()
{
callme(10);
}

void callme(int n)
{

    printf("Hello- %d\n",n);
    
    if(n==1) 
    return;
    callme(n-1); 
    
}