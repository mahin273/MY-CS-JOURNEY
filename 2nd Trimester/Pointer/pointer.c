#include <stdio.h>
int main()
{
    int a, b;
    a = 10;
    int *p;
    p = &a;

    printf("%d %d %d %d\n", a, &a, *p, p);

    b = 15;
    p = &b;

    printf("%d %d %d %d\n", a, &a, *p, p);

    return 0;
}