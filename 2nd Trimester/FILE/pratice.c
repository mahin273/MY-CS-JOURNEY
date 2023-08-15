#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("data.txt", "r");
    if (fp == NULL)
    {
        printf("Error.");
        return 0;
    }
    printf("succesfully opened\n");

    char name[30];
    while (1)
    {
        if (feof(fp))
        {
            break;
        }
        fscanf(fp, "%s", name);
        puts(name);
    }

    return 0;
}