#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabe
 *
 *
 */
void print_alphabet_x10(void)
{
        char alpha;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
