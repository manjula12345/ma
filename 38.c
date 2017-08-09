#include <stdio.h>
 
int main()
{
    int j, number, odd_sum = 0, even_sum = 0;
 
    printf("Enter the value of num\n");
    scanf("%d", &number);
    for (j = 1; j <= number; j++)
    {
        if (j% 2 == 0)
            even_sum = even_sum + j;
        else
            odd_sum = odd_sum + j;
    }
    printf("Sum of all odd numbers  = %d\n", odd_sum);
    printf("Sum of all even numbers = %d\n", even_sum);
    return 0;
}
