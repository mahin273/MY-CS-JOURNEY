#include<stdio.h>
#include<string.h>

int string_length(char[]);
int main()
{
   char s[100];
   printf("Enter String : ");
   gets(s);
   int len = string_length(s);
   printf("%d",len);
    

    return 0;
}
int string_length(char str[])
{
    int i = 0;
   while (str[i]!='\0')
   {
    i++;
   }
   
    return i;
}
/*
//using for loop

#include<stdio.h>
#include<string.h>

int string_length(char[]);
int main()
{
   char s[100];
   printf("Enter String : ");
   gets(s);
   int len = string_length(s);
   printf("%d",len);


    return 0;
}
int string_length(char str[])
{
    int i;
 for(i=0;str[i]!='\0';i++)
   {

   }

    return i;
}
*/