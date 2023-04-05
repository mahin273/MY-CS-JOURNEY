#include<stdio.h>
#include<string.h>
int main()
{
    char str[100] = " ", rev[100]= " ";
    gets(str);
    int length = strlen(str);
    int i;
    for ( i = 0; i<length; i++)
    {
        rev[i] = str[length-i-1];
    }
    int flag = 1;
    for (i = 0; i<length; i++)
    {
       if (str[i] != rev[i])
       {
       flag = 0;
       break;
       }
       
    }
    if (flag == 1)
    {
       printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    
    

    
    return 0;
}