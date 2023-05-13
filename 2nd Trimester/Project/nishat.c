#include <stdio.h>
#include <string.h>

struct Student{
    int roll;
    char name[50];
    int age;
    int marks;
};

//function prototype
void show_same_marks(struct Student students[], int size, int marks);
void show_even_roll_no(struct Student students[], int size);
void show_age_out_of_range(struct Student students[], int size);

int main()
{
    struct Student students[5];
    int i, marks;

    for (i = 0; i < 5; i++)
    {
        printf("Enter Roll Number, Name, Age, and Marks of Students %d:\n", i + 1);
        scanf("%d %s %d %d", &students[i].roll, students[i].name, &students[i].age, &students[i].marks);
    }

    printf("Enter The Marks to Search for: ");
    scanf("%d", &marks);
    printf("Students With %d Marks:\n", marks);
    show_same_marks(students, 5, marks);
    printf("Students With Even Roll No.:\n");
    show_even_roll_no(students, 5);
    printf("Students With Age Out of Range:\n");
    show_age_out_of_range(students, 5);

    return 0;
}
void show_same_marks(struct Student students[], int size, int marks)
{
    int i;
    int count = 0;
    for (i = 0; i < size; i++)
    {
        if (students[i].marks == marks)
        {
            printf("%s\n", students[i].name);
            count++;
        }
    }
    if (count == 0)
    {
        printf("No Student Found With %d Marks.\n", marks);
    }
}
void show_even_roll_no(struct Student students[], int size)
{
    int i;
    int count = 0;
    for (i = 0; i < size; i++)
    {
        if (students[i].roll % 2 == 0)
        {
            printf("%s\n", students[i].name);
            count++;
        }
    }
    if (count == 0)
    {
        printf("No Student Found With Even Roll No.\n");
    }
}
void show_age_out_of_range(struct Student students[], int size)
{
    int i;
    int count = 0;
    for (i = 0; i < size; i++)
    {
        if (students[i].age < 10 || students[i].age > 15)
        {
            printf("%d\n", students[i].roll);
            count++;
        }
    }
    if (count == 0)
    {
        printf("No Student Found With Age Out of Range.\n");
    }
}




