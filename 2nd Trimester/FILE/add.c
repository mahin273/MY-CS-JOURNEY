
#include <stdio.h>
int main()
{
    FILE *fp1;
    int i, sum;
    int num[5] = {10, 20, 30, 40, 50};
    fp1 = fopen("dest.txt", "w");
    sum = 0;
    for (i = 4; i >= 0; i--)
    {
        sum = sum + num[i];
        fprintf(fp1, "% d % d\n", num[i], sum);
    }
    fclose(fp1);
    return 0;
}