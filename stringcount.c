#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
gets(str);
int i,words=0,vowel=0,con=0;
for ( i = 0; i < strlen(str); i++)
{
    char t = tolower(str[i]);
    if (t == ' ')
    {
       words++;
    }
    else
    {
        if (t == 'a'||
            t == 'e'||
            t == 'i'||
            t == 'o'||
            t == 'u' )
        {
            vowel++;
        }
        else
        {
            con++;
        }
        
    }
     

}
    printf("words : %d\n",words+1);
    printf("Vowels : %d\n",vowel);
    printf("Consonent : %d\n",con);
    printf("Letters : %d\n",vowel+con);



return 0;




}