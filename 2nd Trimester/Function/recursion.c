#include<stdio.h>
void print_recursion(int);
int main()
{
 print_recursion(10);
 return 0;
}

void print_recursion(int n)
{
    printf("Have a Good Day!!! %d\n",n);
    if (n == 1) //base case
    {
        return;
    }
    else
    {
        print_recursion(n-1);
    }
    
}