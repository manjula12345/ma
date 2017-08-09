#include<stdio.h>
#include<conio.h>

void main()
{
    int j,sum1 = 0;
    clrscr();

    for(j = 100;j <= 200 ; j++)
    {
        if (j % 7 == 0)
        sum1 = sum1 + j;
    }
    printf("\n Sum of all no between 100 and 200 ");
    printf("which is divisible by 7 is :: %d",sum);
    getch();
}
