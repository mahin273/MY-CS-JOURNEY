#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
gets(str);
char x;
scanf("%c",&x);
int i=0;
while (str[i]!='\0')
{
    if(str[i]==x)
    {
        printf("%d",i);
    }
    i++;
}


    return 0;
}