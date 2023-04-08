#include<stdio.h>
int isprime(int);
int GenNthPrime(int);
int main()
{
int n;
printf("Enter N :");
scanf("%d",&n);
printf("%dth Prime Number is : %d ",n,GenNthPrime(n));

return 0;

}
int isprime(int num)
{
    int i;
    int flag=1;
    for ( i = 2; i < num; i++)
    {
        if (num%i == 0)
        {
            flag = 0;
            break;
        }
        
    }
    return flag;
    
}
int GenNthPrime(int n)
{
    int count = 0;
    int i =2;
    while (count<n)
    {
        if (isprime(i))
        {
            count++;
        }
        i++;
        
    }
    return i-1;
    
}