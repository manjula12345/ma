

#include <stdio.h>

void main()
{
	unsigned char character;		
	
	charcter=32; //start with 32 (space)
	while(charcter<=127)
  {
		printf("%c [%03d] ",charcter,charcter);
		charcter++;
	}
	printf("\n");
	

}
