#include<stdio.h>
#include<string.h>
int main()
{
    char str[100] = " ";
    gets(str);
    int length = strlen(str);
    int i,flag = 1;
    for ( i = 0; i<length/2; i++)
    {
        if (str[i] != str[length-1-i])
        {
            flag =0;
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