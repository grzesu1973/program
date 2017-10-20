#include <stdio.h>

int mnoz(int a, int b)
{
	return a*b;
}

int main()
/* moze byc w main(void) czyli main bez parametrow */

{
	printf("Wynik mnożenia: %i\n" , mnoz(4,5));
	return 0;
}
