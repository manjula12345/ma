#include <stdio.h>

voidmain()
{
    int j, a, b, min, hcf=1;

   
    printf("Enter any two numbers to find HCF: ");
    scanf("%d%d", &a, &b);

    // Find minimum between two numbers
    min = (num1<num2) ? num1 : num2;

    for(j=1; j<=min; j++)
    {
       
  
        if(a%j==0 && b%j==0)
        {
            hcf = j;
        }
    }

    printf("HCF of %d and %d = %d\n", a, b, hcf);
   
}
