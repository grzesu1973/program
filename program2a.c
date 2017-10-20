#include <stdio.h>

int mnoz(int a, int b)
{
	return a*b;
}

int main(void)
/* moze byc w main(void) czyli main bez parametrow */
{
	int wynik; /*delkaracja zmiennej całkowitej*/
	wynik = mnoz(4,5); /* */
	printf("Wynik mnożenia: %i\n" , mnoz(4,5));
	return 0;
}
