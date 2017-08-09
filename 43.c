#include <stdio.h>
 
void main()
{
    char    str[200];
    int countDigits,countAlphabet,countSpecialChar,countSpaces;
    int count;
 
    printf("Enter a string: ");
    gets(str);
 
    for(count=0;str[count]!=NULL;count++)
    {
 
        if(str[count]>='0' && str[count]<='9')
            countDigits++;
        else if((str[count]>='A' && str[count]<='Z')||(str[count]>='a' && str[count]<='z'))
            countAlphabet++;
        else if(str[count]==' ')
            countSpaces++;
        else
            countSpecialChar++;
    }
 
    printf("\nDigits: %d \nAlphabets: %d \nSpaces: %d \nSpecial Characters: %d",countDigits,countAlphabet,countSpaces,countSpecialChar);
 }
