#include <stdio.h>
int main()
{
    FILE *fp;
    int numbers[10], max = -1000000;
    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        return 0;
    }
    for (int i = 0; i < 10; i++)
    {
        fscanf(fp, "%d", &numbers[i]);
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    fclose(fp);
    printf("The maximum number among the 10 numbers is: %d\n", max);
    return 0;
}