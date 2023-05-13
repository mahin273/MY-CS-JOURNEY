#include <stdio.h>
int main()
{
    char str[100];
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i > 0)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                if (str[i] == str[i - 1])
                {
                    continue;
                }
                else
                {
                    printf("%c", str[i]);
                }
            }
            else
            {
                printf("%c", str[i]);
            }
        }
        else
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}