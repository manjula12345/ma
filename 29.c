#include <stdio.h>
void main()
{
    int j, a, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &a);

    printf("Fibonacci Series: ");

    for (j = 1; j <= a; ++j)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
   
}
