#include <stdio.h>

void main()
{
   char str[100], char;
   int j, freq = 0;

   printf("Enter a string: ");
   gets(str);

   printf("Enter a character to find the freq: ");
   scanf("%c",&ch);

   for(j = 0; str[j] != '\0'; ++j)
   {
       if(char == str[j])
           ++freq;
   }

   printf("Frequency of %c = %d", char, freq);
}
