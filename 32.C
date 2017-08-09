#include <stdio.h>
VOID main()
{
    int a, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &a);

    while(a != 0)
    {
        remainder = a%10;
        reversedNumber = reversedNumber*10 + remainder;
        a /= 10;
    }

    printf("Reversed Number = %d", reversedNumber);

   
}
