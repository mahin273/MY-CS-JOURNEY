#include <stdio.h>
#include <string.h>
 struct Student {
    int roll_no;
    char name[50];
    int age;
    int marks;
};
 void display_same_marks(struct Student students[], int size, int marks) {
    int i;
    int count = 0;
    for(i = 0; i < size; i++) {
        if(students[i].marks == marks) {
            printf("%s\n", students[i].name);
            count++;
        }
    }
    if(count == 0) {
        printf("No student found with given marks.\n");
    }
}
 void display_even_roll_no(struct Student students[], int size) {
    int i;
    int count = 0;
    for(i = 0; i < size; i++) {
        if(students[i].roll_no % 2 == 0) {
            printf("%s\n", students[i].name);
            count++;
        }
    }
    if(count == 0) {
        printf("No student found with even roll no.\n");
    }
}
void age_out_of_range(struct Student students[], int size) {
    int i;
    int count = 0;
    for(i = 0; i < size; i++) {
        if(students[i].age < 10 || students[i].age > 15) {
            printf("%d\n", students[i].roll_no);
            count++;
        }
    }
    if(count == 0) {
        printf("No student found with age out of range.\n");
    }
}
 int main() {
    struct Student students[5];
    int i;
    // Input student information
    for(i = 0; i < 5; i++) {
        printf("Enter roll no., name, age, and marks of student %d:\n", i+1);
        scanf("%d %s %d %d", &students[i].roll_no, students[i].name, &students[i].age, &students[i].marks);
    }
    // Display students with same marks
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    printf("Students with same marks:\n");
    display_same_marks(students, 5, marks);
    // Display students with even roll no.
    printf("Students with even roll no.:\n");
    display_even_roll_no(students, 5);
    // Display students with age out of range

    printf("Students with age out of range:\n");
    age_out_of_range(students, 5);
    return 0;
}
