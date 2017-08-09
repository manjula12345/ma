#include <stdio.h>
void main()
{
    int na, nb, j, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    for(j=1; j <= a && i <= b; ++j)
    {
        
        if(a%j==0 && b%j==0)
            gcd = j;
    }

    printf("G.C.D of %d and %d is %d", a, b, gcd);

  
}
