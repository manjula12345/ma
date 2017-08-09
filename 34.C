#include <stdio.h>

void main()
{
    char str[MAX_SIZE];
    int alphabets, digits, others, j;

    alphabets = digits = others = i = 0;


   
    printf("Enter any string : ");
    gets(str);

 
    
    
    while(str[j]!='\0')
    {
        if((str[j]>='a' && str[j]<='z') || (str[j]>='A' && str[j]<='Z'))
        {
            alphabets++;
        }
        else if(str[j]>='0' && str[j]<='9')
        {
            digits++;
        }
        else
        {
            others++;
        }

        j++;
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", others);

   
}
