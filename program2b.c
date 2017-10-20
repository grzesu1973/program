#include <stdio.h>

int mnoz(int a, int b)
{
	return a*b;
}
int dodaj(int a, int b)
{
	return a+b;
}

int main(void)
/* moze byc w main(void) czyli main bez parametrow */
{
	int a = 2, b = 5; 			/* deklaracja  wraz z inicjalizacja */
	char wybor = '*';
	/* if(wyrazenie) {blok jezeli wyrazenie prawdziwe} */
	if(wybor == '*') 
	{
		printf("Wynik mnozenia: %i\n" , mnoz(a, b));
	}
	else
	{ 
	printf("Wynik dodawania: %i\n" , dodaj(a, b));	/*wyświetla informacje z wynikiem */
							/* \n przechodzi do nastepnej lini */
	}
	return 0;

}
