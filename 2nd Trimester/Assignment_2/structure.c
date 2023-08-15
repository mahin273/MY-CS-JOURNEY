#include<stdio.h>
#include<string.h>

struct student
{
    char name[100];

    char id[50];
    
    float cgpa;

};

int main()
{
struct student s;

strcpy(s.name,"");

strcpy(s.id,"");

s.cgpa = 0.00;


// print default values

printf("Name : %s\n",s.name);
printf("Id : %s\n",s.id);
printf("CGPA : %.2f",s.cgpa);

return 0;

}