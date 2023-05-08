/*
NAME : Md.Mahin Khan
ID   : 0112230105
SEC  : L
*/
#include <stdio.h>
#include <string.h>
struct Student
{
    int roll_no;
    char name[50];
    int age;
    int marks;
};


void SameMarks(struct Student students[], int size, int marks)
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


void EvenRollNo(struct Student students[], int size)
{
    int i;
    int count = 0;
    for (i = 0; i < size; i++)
    {
        if (students[i].roll_no % 2 == 0)
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


void AgeOutOfRange(struct Student students[], int size)
{
    int i;
    int count = 0;
    for (i = 0; i < size; i++)
    {
        if (students[i].age < 10 || students[i].age > 15)
        {
            printf("%d\n", students[i].roll_no);
            count++;
        }
    }
    if (count == 0)
    {
        printf("No Student Found With Age Out of Range.\n");
    }
}


int main()
{
    struct Student students[5];
    int i, marks;
    
    for (i = 0; i < 5; i++)
    {
        printf("Enter Roll No., Name, Age, and Marks of Student %d:\n", i + 1);
        scanf("%d %s %d %d", &students[i].roll_no, students[i].name, &students[i].age, &students[i].marks);
    }
    
    printf("Enter The Marks to Search for: ");
    scanf("%d", &marks);
    
    printf("Students With %d Marks:\n", marks);
    SameMarks(students, 5, marks);
    
    printf("Students With Even Roll No.:\n");
    EvenRollNo(students, 5);
    
    printf("Students With Age Out of Range:\n");
    AgeOutOfRange(students, 5);
    
    return 0;
}
