#include <stdio.h>
void main()
{
int a, b;
printf("Print odd numbers till: ");
scanf("%d", &a);
printf("All odd numbers from 1 to %d are: \n", a);
for(b=1; b<=a; b++)
{
if(b%2!=0)
{
printf("%d\n", b);
}
}
}
