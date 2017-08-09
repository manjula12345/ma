#include <stdio.h>
long int multiplyNumbers(int a);
int main()
{
   int a;
   printf("Enter a positive number: ");
    scanf("%d", &a);
    printf("Factorial of %d = %ld", a, multiplyNumbers(a));
    return 0;
}
long int multiplyNumbers(int a)
{
    if (a >= 1)
    {
        return a*multiplyNumbers(a-1);
        }
    else
     return 1;
}
