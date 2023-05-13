#include <stdio.h>
void inputData(int goals[], int mins[], int n)
{
    printf("Enter goals and mins : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &goals[i], &mins[i]);
    }
}

int countofHattrick(int goals[])
{
    int i, h = 0;
    for (i = 0; goals[i] != '\0'; i++)
    {
        if (goals[i] >= 3)
        {
            h++;
        }

        return h;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int goals[100];
    int mins[100];
    inputData(&goals, &mins, n);

    int h;
    h = countofHattrick(goals);
}