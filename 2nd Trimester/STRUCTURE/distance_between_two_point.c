#include<stdio.h>
#include<math.h>

typedef struct 
{
    float x;
    float y;
}point;

int main()
{
 point a,b;
 scanf("%f %f",&a.x,&a.y);
 scanf("%f %f",&b.x,&b.y);

 float distance;
 distance = sqrt(pow((a.x-b.x),2)+ pow((a.y - b.y),2));

 printf("Distance : %.2f",distance);
 return 0;


}