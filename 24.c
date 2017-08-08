#include <stdio.h>
#include <math.h
void main()
{ 
int lower, higher, j, temp1, temp2, remainder, a = 0, result = 0;
printf("Enter two numbers(intervals): ");
scanf("%d %d", &lower, &higher);
printf("Armstrong numbers between %d an %d are: ", lower, higher);
for(j = lower + 1; j < higher; ++j)
{
temp2 = j;
temp1 = j;
while (temp1 != 0)
{
temp1 /= 10;
++n  
}
while (temp2 != 0)
{
remainder = temp2 % 10;
result += pow(remainder, n);
temp2 /= 10;
 }
 if (result == j)
 {
 printf("%d ", j);
 }
 a = 0;
 result = 0;
}
}
