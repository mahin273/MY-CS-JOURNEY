#include <stdio.h>
int prime(int);
int main()
{
    int i, n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        if (prime(i) == 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
int prime(int num)
{
    int i;
    int flag = 1;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}