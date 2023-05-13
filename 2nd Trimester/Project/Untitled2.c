#include <stdio.h>
 int digitPosition(int number);
 int main() {
    int number, digit;
     printf("Enter an integer: ");
    scanf("%d", &number);
     // Call the digitPosition function to find the second from the right digit
    digit = digitPosition(number);
     printf("The second digit from the right is %d\n", digit);
     return 0;
}
 int digitPosition(int number) {
    int digit;
     // Remove the last digit by dividing the number by 10
    number /= 10;
     // Extract the second last digit
    digit = number % 10;
     return digit;
}
