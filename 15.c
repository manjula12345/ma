#include <stdio.h>
void main()
{
int base num, exponent;
long long result = 1;
printf("Enter a base number: ");
scanf("%d", &base num);
printf("Enter an exponent: ");
scanf("%d", &exponent);
while (exponent != 0)
{
result *= basenum;    
}
printf("Answer = %lld", result);
}
