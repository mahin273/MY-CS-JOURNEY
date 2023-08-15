#include <stdio.h>

int DemogorgonNumber(int a)
//: if DEMOGORGON returns 1 else returns -1
{
    int checkCondition1 = checkerFunc1(a);
    int checkCondition2 = checkerFunc2(a);

    if (checkCondition1 == 1 && checkCondition2 == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int checkerFunc1(int a)
//: if CONDITION No. 1 is true returns 1 else returns -1
{
    int sumOfEvenDigits = 0, sumOfOddDigits = 0, digit;

    while (a != 0)
    {
        digit = a % 10;

        if (digit % 2 == 0)
        {
            sumOfEvenDigits += digit;
        }
        else
        {
            sumOfOddDigits += digit;
        }

        a = a / 10;
    }

    if (sumOfOddDigits < sumOfEvenDigits)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int checkerFunc2(int a)
//: if CONDITION No. 2 is true returns 1 else returns -1
{
    int checkPrime = primeChecker(a);
    int checkStrong = strongChecker(a);

    if (checkPrime == 1 && checkStrong == -1)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int primeChecker(int a)
//: if PRIME returns 1 else returns -1
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return -1;
        }
    }

    return 1;
}
int strongChecker(int a)
//: if STRONG returns 1 else returns -1
{
    int sumOfFactorial = 0, digit, fact, n = a;
    while (a != 0)
    {
        digit = a % 10;
        fact = factorial(digit);
        sumOfFactorial += fact;

        a = a / 10;
    }

    if (sumOfFactorial == n)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int factorial(int a)
//: return Factorial value of a
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int rangeMin, rangeMax;
    scanf("%d %d", &rangeMin, &rangeMax);

    for (int i = rangeMin; i <= rangeMax; i++)
    {
        int checkDemogorgon = DemogorgonNumber(i);

        if (checkDemogorgon == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}