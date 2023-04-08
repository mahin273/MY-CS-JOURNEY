#include<stdio.h>
#include<string.h>
int str_length(char[]);
int find_substr( char[],char[]);
int main()
{
    char a[100], b[100];
    printf("Enter a & b :\n");
    gets(a);
    gets(b);
    int result = find_substr(a, b);
 printf("Result: %d\n", result);

    return 0;
}
int str_length(char str[])
{
int len = 0;

while (str[len] !='\0')
{
    len++;
}
return len;

}
int find_substr( char a[],char b[])
{
    int len_a = str_length(a);
    int len_b = str_length(b);
    int i,j;
    for ( i = 0; i < len_a-len_b; i++)
    {
        for ( j = 0; j < len_b; j++)
        {
            if (a[i+j] != b[j])
            {
               break;
            }
            
        }
        if (j == len_b)
        {
           return 1;
        }
           
    }
    return 0;

    
}