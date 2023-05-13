#include <stdio.h>
void fibonacci(int n)
{
    int prev = 0, curr = 1, temp;
    printf("0 & ");
    if (n >= 2)
    {
        printf("1 # ");
    }
    for (int i = 3; i <= n; i++)
    {
        temp = curr;
        curr = prev + curr;
        prev = temp;
        if (curr % 2 == 0)
        {
            printf("%d $ ", curr);
        }
        else if (curr == 1)
        {
            printf("1 # ");
        }
        else
        {
            printf("%d # ", curr);
        }
    }
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}