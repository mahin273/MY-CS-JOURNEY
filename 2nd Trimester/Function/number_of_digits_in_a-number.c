#include<stdio.h>
int count(int);
int main()
{
int a;
printf("Enter A Number : ");
scanf("%d",&a);

printf("Number of Digits = %d",count(a));

return 0;

}
int count(int num)
{
int count=0;
while (num!= 0)
{
    num =num/10;
    count++;
}
return count;

}