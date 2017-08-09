#include <stdio.h>
void main()
{
    int j, x, a=0, b=1, show=0;
    printf("\nEnter number of terms required in Fibonacci Series: ");
    scanf("%d",&x);
    printf("\nThe Fibonacci Series is:\n\n\n %d+%d+", a, b); 
 
    j=2;    
    /* i=2, since the first two terms of the series have already been shown*/
    while (j<n)
    {
        show=a+b;
        a=b;
        b=show;
        ++j;
        printf("%d+",show);
    }
    
}
