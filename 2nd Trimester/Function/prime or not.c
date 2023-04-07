#include<stdio.h>
int prime(int);
int main()
{
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    printf("%d",prime(a));

return 0;
}
int prime(int num)
{
    int i;
    int flag = 1;
    for ( i = 2; i <num; i++)
    {
        if (num%i == 0)
        {
            flag =0;
            break;
        }
        
    }
    return flag;

    

}