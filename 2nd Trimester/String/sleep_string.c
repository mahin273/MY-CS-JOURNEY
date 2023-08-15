#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
char str1[90];
gets(str1);
int i;
for (  i = 0; i < strlen(str1); i++)
{
    printf("%c\n",str1[i]);
    Sleep(500);
}

return 0;
}