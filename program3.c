#include <stdio.h>

void mnoz(int a, int b) { printf("Wynik mnozenenia %d\n", a*b); }
void dodaj(int a, int b) { printf("Wynika dodawania %d\n", a+b); }
void odejmi(int a, int b) { printf("Wynik odejmowania %d\n", a-b); }
void dziel(int a, int b) { printf("Wynik dzielenia %d\n", a/b); }

int main(void)						/* moze byc w main(void) czyli main bez parametrow */
{
	system("clear");
	int a = 2, b = 5; 				/* deklaracja  wraz z inicjalizacja */
	char wybor;

	printf("Wybierz jeden z przedstawionych znaków \n w celu wykonania działania +,-,*,/,  : \n");
	scanf("%c", &wybor);				/*czytaj z konsoli i zapisz wartosc pod wybor if(wyrazenie) {blok jezeli wyrazenie prawdziwe} */
	if(wybor == '*')  				/* sprawdzenie  czy rowne */
	{ mnoz(a, b);
	}
	else
	if(wybor =='+')
	{ dodaj(a, b);
	}
	else
	if(wybor == '-')
	{ odejmi(a, b); 						/* ten srednik jest opcjonalny */
	}
	else
	if(wybor == '/')
	{ dziel(a, b);
	}
	else
	{ printf("Wrong  key \n");
	}
	return 0;
}
