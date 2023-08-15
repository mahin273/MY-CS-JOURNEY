#include<stdio.h>
int generateprime(int);
int main()
{
    int i,n;
    printf("Enter The Number :\n");
    scanf("%d",&n);
    for ( i = 2; i < n; i++)
    {
        if (generateprime(i) == 1)
        {
            printf("%d\n",i);
        }
        
    }
    
    return 0;
}
int generateprime(int n)
{
    int i;
    int flag = 1;
    for ( i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            flag = 0;
            break;
        }
        
    }
    return flag;
    
}