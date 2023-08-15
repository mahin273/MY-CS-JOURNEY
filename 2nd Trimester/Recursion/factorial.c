#include<stdio.h>
#include<stdlib.h>

int fact(int num)
{
    
    if (num == 1)
    {
        return 1;
    }
    
    return num*fact(num-1);
}

int main()
{

int num,factorial;
printf("Insert Your Number : ");
scanf("%d",&num);
factorial = fact(num);
printf("%d",factorial);
    return 0;

}