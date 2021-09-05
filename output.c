/* copy a character from input and then output it */

#include <stdio.h>

int main()
{
	int c;

	c = getchar();
	
	while (c != EOF)
	{
		putchar(c);
		
		c = getchar();
	}
}
