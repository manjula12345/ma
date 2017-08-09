#include <stdio.h>
#define MAX_SIZE 100 

void main()
{
    char str[MAX_SIZE];
    int j, words;

   
    printf("Enter any string: ");
    gets(str);

    j = 0;
    words = 1;
    while(str[j] != '\0')
    {
   
        if(str[j]==' ' || str[j]=='\n' || str[j]=='\t')
        {
            words++;
        }

        j++;
    }

    printf("Total number of words = %d", words);
    }
    
}
