#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    int length = 0, i = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        length++;
        i++;
    }

    printf("Length of the string is %d", length);

    return 0;
}
