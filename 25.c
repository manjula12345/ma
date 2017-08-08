#include <stdio.h>
#include <math.h>
void main()
{
 int number, original, remainder, result = 0, n = 0 ;
 printf("Enter an integer: ");
 scanf("%d", &number);
 original = number;
  while (original!= 0)
    {
        original /= 10;
        ++n;
    }

    Number = number;

    while (Number != 0)
    {
        remainder = Number%10;
        result += pow(remainder, n);
        Number /= 10;
    }

    if(result == number)
    {
        printf("%d is an Armstrong number.", number);
        }
    else
    {
        printf("%d is not an Armstrong number.", number);
        }
}
