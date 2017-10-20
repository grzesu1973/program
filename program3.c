#include <stdio.h>

int mnoz(int a, int b) { 
printf("\nWynik mnozenenia %d\n\n", a*b);
return a * b;
}
int dodaj(int a, int b) { 
printf("\nWynika dodawania %d\n\n", a+b);
return a + b;
}
int odejmi(int a, int b) { 
printf("\nWynik odejmowania %d\n\n", a-b); 
return a - b;
}
int dziel(int a, int b) { 
printf("\nWynik dzielenia %d i reszta %i \n\n", a / b, a % b); 
return a / b;
}

int licz()
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
	{ puts("Nie znam działania!"); /* printf("Wrong  key \n"); */
	}

int main(void)						/* moze byc w main(void) czyli main bez parametrow */
{
	system("clear"); 				/* czyści ekran */

	int a = 2, b = 5; 				/* deklaracja  wraz z inicjalizacja */
	char wybor;
	int czy_dalej = 1;

	while(czy_dalej == 1) {
	printf("Podaj warość arkumentu a: "); scanf("%i", &a);
	printf("Wprowadz jeden z przedstawionych znaków \nw celu wykonania działania     +  -  * /  ");
	printf("\nPodaj wartość argument b: "); scanf("%i", &b);

	licz(a , b , wybor)l
	printf("Czy dajel liczyć? 1 - tak , 0 - nie")	

scanf(" %c", &wybor);
	/* scanf("%c", &wybor);*/

	return 0;
}
