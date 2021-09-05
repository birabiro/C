#include <stdio.h>

int main()
{
	int cels, fahr, upper= 100, lower= 0, step = 5;
	
	printf("C\tF\n");
	
	cels = lower;

	while (cels <= upper)
	{
		fahr = (cels * (9.0 / 5.0)) + 32;
	
		printf("%d\t%d\n", cels, fahr);
	
		cels = cels + step;

	}
}

