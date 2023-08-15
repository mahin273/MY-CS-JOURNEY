#include <stdio.h>
int main()
{
    int a, b;
    int *p, *q;
    p = &a;
    q = &b;

    scanf("%d", p);

    scanf("%d", q);

    int result = (*p) * (*q);

    printf("%d", result);
    return 0;
}