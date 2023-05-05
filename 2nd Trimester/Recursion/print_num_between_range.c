#include<stdio.h>

int print(int, int);

int main()
{
int a, b;
scanf("%d %d",&a,&b);

print(a, b);
}

int print(int low, int up)
{
    if (up<low)
    {
       return;
    }
    print(low, up-1);

    printf("%d\n", up);

    
}