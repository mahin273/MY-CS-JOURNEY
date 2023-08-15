#include <stdio.h>
int main()
{
    FILE *file;
    file = fopen("numbers.txt", "r");
    int count = 0;
    int arr[100];
    while (!feof(file))
    {

        fscanf(file, "%d", &arr[count]);
        count++;
    }
    float mid;
    if (count % 2 == 0)
    {
        mid = (arr[(count / 2 - 1)] + arr[((count / 2))]) / 2.0;
    }
    else
    {
        mid = arr[(count) / 2];
    }
    printf("%f\n", mid);
    return 0;
}