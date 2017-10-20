#include <stdio.h> /*biblioteka standardowa input-output*/
/* y = f(x) */
/*     f(x) => 0 */


int main() /* funkcja glowna programu*/
/* int -> typ zwracanej wartosci (int - wartosc calkowita) */ 
{
	puts("Pierwszy program"); /* puts - funkcja z biblioteki standardowej */
				  /* wyświatelająca ciąg znaków */

	/* putchar('g'); */
	putchar('\n');	/*znak konca lini*/
	putchar('\t');	/*znak tabulatora*/
	putchar('g');
	putchar('\\');	/*wypisuje \*/
/*	putchar('\r');	/*powrot karetki*/
	return 0;
}
