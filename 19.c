 #include<stdio.h>
 void main()
 {
 int a, num1, num2, b, remark;
 printf("\n Enter any two Numbers : ");
 scanf("%d %d",&num1,&num2);
 printf("\n\n The Prime Numbers between the given Two Intervals are . . . \n ");
 for(a=num1; a<=num2; ++a)
 {
 remark=0;
 for(b=2;b<=a/2;b++)
 {
 if((a % b) == 0)
 {
 remark++;
 break;
 }
 }
 if(remark==0)
 printf("\n %d ", a);
 }
 getch();
 }
