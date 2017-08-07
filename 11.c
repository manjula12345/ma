#include <stdio.h>
void main()
{
int num, j, sum = 0;
printf("Enter a positive integer: ");
scanf("%d",&num);
for(j=1; j <= 100; ++j)
{
sum += j;  
}
printf("Sum = %d",sum);
}

