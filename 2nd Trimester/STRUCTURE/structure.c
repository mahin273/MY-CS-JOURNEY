#include<stdio.h>

typedef struct 
{
   int day;
   int month;
   int year;
}Date;

int main()
{
Date start,end;
printf("Enter The Start Date : ");
scanf("%d %d %d",&start.day,&start.month,&start.year);
printf("Enter End Date : ");
scanf("%d %d %d",&end.day,&end.month,&end.year);

printf("start date :%d-%d-%d\n",start.day,start.month,start.year);

printf("start date :%d-%d-%d\n",end.day,end.month,end.year);
} 