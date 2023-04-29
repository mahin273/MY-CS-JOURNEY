#include<stdio.h>
#include<stdlib.h>

//1+2+3+....+num <--> 1+2+3+...+num-1+num

int sumUpTo(int num)
{
    if (num==1)
    {
        return 1;
    }
    
    return num + sumUpTo(num-1);
}
//num = 3 --> 3+3
//num = 2 --> 2+1
//num = 1 --> 1

int main()
{
     int num,result;
     printf("Insert Your Number: ");
     scanf("%d",&num);
     result = sumUpTo(num);
     printf("Result = %d\n",result);
     
    return 0;
}