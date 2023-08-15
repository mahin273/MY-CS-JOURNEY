#include<stdio.h>
int reverse(int);
int main()
{
int a;
scanf("%d",&a);
printf("Reverse of %d = %d",a,reverse(a));
return 0;

}
int reverse(int x)
{
int r,sum=0;
do
{
    r = x%10;
    sum = sum*10+r;
    x /= 10; 

} while (x>0);

return sum;

}

/*
//using for loop
#include<stdio.h>

int reverse(int);

int main() {
    int a;
    scanf("%d", &a);
    printf("Reverse of %d = %d", a, reverse(a));
    return 0;
}

int reverse(int x) {
    int r, sum = 0;
    for (; x > 0; x /= 10) {
        r = x % 10;
        sum = sum * 10 + r;
    }

    return sum;
}

*/

/*
#include<stdio.h>

int reverse(int);

int main() {
    int a;
    scanf("%d", &a);
    printf("Reverse of %d = %d", a, reverse(a));
    return 0;
}

int reverse(int x) {
    int r, sum = 0;
    while (x > 0) {
        r = x % 10;
        sum = sum * 10 + r;
        x /= 10;
    }

    return sum;
}

*/
