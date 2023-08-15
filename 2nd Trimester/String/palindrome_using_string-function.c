#include<stdio.h>
#include<string.h>
int main()
{
    char s[80];
    char t[80];
    gets(s);
    strcpy(t,s);
    strrev(t);
    if (strcmp(s,t) == 0)
    {
        printf("\"%s\" is Palindorme",s);
    }
    else
    {
        printf("\"%s\" is Not Palindorme",s);
    }

    return 0;
}
