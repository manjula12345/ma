#include<stdio.h>
void main()
{
int num,j,count,a;
printf("Enter max range: ");
scanf("%d",&a);
for(num = 1;num<=a;num++)
{
count = 0;
for(j=2;j<=num/2;j++)
if(num%j==0)
{
count++;
break;  
}
}
if(count==0 && num!= 1)
printf("%d ",num);
}
}
