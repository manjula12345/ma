#include<stdio.h>
void main()
{
int number,j,counter,minimum,maximum;
printf("Enter minimum range: ");
scanf("%d",&minimum);
printf("Enter maximum range: ");
scanf("%d",&maximum);
for(number = minimum;number<=maximum;number++)
{
counter = 0;
for(j=2;j<=num/2;j++)
{
if(number%j==0)   
counter++; 
break;
}
}
if(counter==0 && number!= 1)
printf("%d ",number); }

}

