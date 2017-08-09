#include <stdio.h>

void main()
{
    
    int x, y, z;
    printf("Enter x,y,z: ");
    scanf("%d %d %d", &x, &y, &z);
    
    if (x > y && x > z)
    {
        printf("x is Greater than y and z");
    }
    else if (y > x && y > z) 
    {
        printf("y is Greater than x and z");
    }
    else if (z > x && z > y) 
    {
        printf("z is Greater than x and z");
    }
    else {
        printf("all are equal or any two values are equal");
    } 
    }
