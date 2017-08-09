#include <stdio.h>
  void main()
  {
    int x[10];
    int j;
    int greatest;
    printf("Enter ten values:");
  
    for (j = 0; j < 10; j++)
    {
    	scanf("%d", &a[j]);
    }
    //Assume that x[0] is greatest
    greatest = x[0];
    for (j = 0; j < 10; j++) 
    {
	if (x[j] > greatest)
  {
	greatest = x[j];
    }
    }
    printf("
    Greatest of ten numbers is %d", greatest);
   
  }
