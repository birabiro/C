#include <stdio.h>

int main()
{
	int lbs= 0;
	// loop creato con la funzione for,
	// se lbs = 0, incrementa lbs +15 fino a quando lbs =  300
	//

	for (lbs = 0; lbs <= 300; lbs = lbs + 5)
		
		printf("%3d lbs\t%6.1f kg\n", lbs, (lbs/2.205));
				
	return 0;
}

