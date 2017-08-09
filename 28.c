#include <stdio.h>
void main()
{
    int a, j;

    printf("Enter an integer: ");
    scanf("%d",&a);

    for(j=1; j<=10; ++j)
    {
        printf("%d * %d = %d \n", a, j, a*j);
    }
   
}
