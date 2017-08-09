#include <stdio.h>
void main()
{
    int a, b, minMultiple;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

  
    minMultiple = (a>b) ? a : b;

 
    while(1)
    {
        if( minMultiple%n1==0 && minMultiple%n2==0 )
        {
            printf("The LCM of %d and %d is %d.", a, b,minMultiple);
            break;
        }
        ++minMultiple;
    }
    
}
