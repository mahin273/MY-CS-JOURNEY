#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    gets(str1);
    char str2[100];
    gets(str2);
    int flag = 1;

if (strlen(str1) != strlen(str2))
{
    flag = 0;
}
else
{
    int i;
    for ( i = 0; i < strlen(str1); i++)
    {
        if(str1[i] != str2[i])
        {
            flag = 0;
            break;
        }
    }
    
}
if (flag == 1)
{
    printf("Equal string");
}
    else if(flag == 0)
    {
       printf("Not equal");
    }


    
    

}