#include <stdio.h>
typedef struct
{
    float real;
    float imag;

} complex;

complex add(complex n1, complex n2);

int main()
{
    complex x, y, sum;
    printf("Enter First Complex Number : ");
    scanf("%f %f", &x.real, &x.imag);
    printf("Enter Second Complex Number : ");
    scanf("%f %f", &y.real, &y.imag);

    sum = add(x, y);
    printf("The Sum is : %.2f + %.2f i\n", sum.real, sum.imag);
}

complex add(complex n1, complex n2)
{
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;

    return temp;
}