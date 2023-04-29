#include<stdio.h>
int main()
{
int a =  5;
int *p=&a;
printf("%p\n",&a);
printf("%p\n",p);
printf("%d",*p);

return 0;
}