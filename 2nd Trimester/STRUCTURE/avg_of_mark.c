#include <stdio.h>

typedef struct
{
    char name[50];
    int id;
    float mark;
    char grade;
} student;

char check_grade(student);

float average(student[], int);

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    student st[n];
    fflush(stdin);
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter Name : ");
        gets(st[i].name);

        printf("Enter ID : ");
        scanf("%d", &st[i].id);

        printf("Enter Mark : ");
        scanf("%f", &st[i].mark);

        st[i].grade = check_grade(st[i]);

        fflush(stdin); // This way is standard

        /*
        char a[10]; // dummy char for avoiding space as name
         gets(a);
        */
    }
    for (i = 0; i < n; i++)
    {
        printf("Name : %s\n ID : %d\n MARK : %.2f\n Grade: %c\n", st[i].name, st[i].id, st[i].mark, st[i].grade);
    }
    float avg = average(st, n);
    printf("Average : %.2f\n", avg);

    return 0;
}

char check_grade(student s)
{
    char g;
    if (s.mark >= 90)
    {
        g = 'A';
    }
    else if (s.mark >= 80)
    {
        g = 'B'; /* code */
    }
    else if (s.mark >= 70)
    {
        g = 'C';
    }
    else if (s.mark >= 60)
    {
        g = 'D';
    }
    else
    {
        g = 'F';
    }

    return g;
}

float average(student s[], int n)
{
    float sum = 0;
    int i, avg;
    for (i = 0; i < n; i++)
    {
        sum = sum + s[i].mark;
    }
    avg = sum / n;

    return avg;
}
