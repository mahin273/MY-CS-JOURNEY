//substring problem
#include<stdio.h>
#include<string.h>
int main()
{
char s[100],t[100];
int i,j,p;
printf("Enter a sentence : ");
gets(s);
printf("Which word?");
gets(t);

p = -1;
for ( i = 0; i < strlen(s); i++)
{
    if (s[i]=t[0])
    {
        for ( j = 1; j < strlen(t); j++)
        {
            if (s[i+j] != t[j])
            {
                break;
            }
            
        }
        if (j == strlen(t) )
        {
            p = i;
            break;
        }
        
        
    }
    
}
if (p == -1)
{
    printf("Not Found");
}
else
{
    printf("Found at position : %d",p+1);
}

return 0;

}

/*
//substring problem
//for all position
#include<stdio.h>
#include<string.h>
int main()
{
char s[100],t[100];
int i,j,p;
printf("Enter a sentence : ");
gets(s);
printf("Which word?");
gets(t);

p = -1;
for ( i = 0; i < strlen(s); i++)
{
    if (s[i]=t[0])
    {
        for ( j = 1; j < strlen(t); j++)
        {
            if (s[i+j] != t[j])
            {
                break;
            }
            
        }
        if (j == strlen(t) )
        {
            p = i;
             printf("Found at position : %d\n",p+1);
            break;
        }
        
        
    }
    
}
if (p == -1)
{
    printf("Not Found");
}


return 0;

}
*/