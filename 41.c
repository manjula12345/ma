#include <string.h>
int main()
{
   char str[50];
   int j = 0, l = 0, a = 1;
   clrscr();
   puts("Enter any string\n");
   gets(str);
   for(j = 0; str[j] !='\0'; j++)
   {
      l = l + 1;
   }
   printf("The number of characters in the string are %d\n", l);
   for(j = 0; j <= l-1; j++)
   {
      if(str[j] == ' ')
      {
    a = a + 1;
      }
   }
   printf("The number of words in the string are %d", f);
   getch();
   return 0;
}
