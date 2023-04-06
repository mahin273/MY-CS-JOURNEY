#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
gets(str);
char x;
scanf("%c",&x);
int i=0,pos = -1;
while (str[i]!='\0')
{
    if(toupper(str[i])==toupper(x))
    {
        pos=i;
        break; //for print first position.If need last pos ,just remove the break
    }
    i++;
}
if (pos == -1)
{
    printf("Not found");
}
else
{printf("Position is : %d",pos+1);
}

    return 0;
} 