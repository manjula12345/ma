#include <stdio.h>
int main()
{
char a;
int isLowercaseVowel, isUppercaseVowel;
printf("Enter an alphabet ");
scanf("%c",&a);
isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
if (isLowercaseVowel || isUppercaseVowel)
{
printf("%c is a vowel.", c);
}
else
{
printf("%c is a consonant", c);
}
return 0;
}
